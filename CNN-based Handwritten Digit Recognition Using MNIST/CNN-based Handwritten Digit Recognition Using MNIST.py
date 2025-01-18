# Bước 1: Cài đặt TensorFlow và các thư viện cần thiết 
!pip install tensorflow



# Bước 2: Tải và chuẩn bị dữ liệu
import tensorflow as tf
from tensorflow.keras import layers, models
from tensorflow.keras.preprocessing.image import ImageDataGenerator

# Tải và chuẩn bị dữ liệu MNIST
mnist = tf.keras.datasets.mnist
(train_images, train_labels), (test_images, test_labels) = mnist.load_data()

# Chuẩn hóa dữ liệu (normalize)
train_images = train_images.reshape((60000, 28, 28, 1)).astype('float32') / 255
test_images = test_images.reshape((10000, 28, 28, 1)).astype('float32') / 255

# Tăng cường dữ liệu cho tập huấn luyện
datagen = ImageDataGenerator(
    rotation_range=10,       # Xoay ảnh ngẫu nhiên
    width_shift_range=0.1,   # Dịch chuyển ảnh theo chiều ngang
    height_shift_range=0.1,  # Dịch chuyển ảnh theo chiều dọc
    shear_range=0.1,         # Biến dạng ảnh
    zoom_range=0.1,          # Phóng to thu nhỏ ảnh
    horizontal_flip=True,    # Lật ảnh ngang
    fill_mode='nearest'      # Phương thức điền các pixel bị thiếu
)

# Fit dữ liệu tăng cường vào dữ liệu huấn luyện
datagen.fit(train_images)



# Bước 4: Xây dựng mô hình CNN
model = models.Sequential([
    layers.Conv2D(32, (3, 3), activation='relu', input_shape=(28, 28, 1)),
    layers.MaxPooling2D((2, 2)),
    layers.Conv2D(64, (3, 3), activation='relu'),
    layers.MaxPooling2D((2, 2)),
    layers.Conv2D(64, (3, 3), activation='relu'),
    layers.Dropout(0.5),  # Thêm lớp Dropout để tránh overfitting
    layers.Flatten(),
    layers.Dense(64, activation='relu'),
    layers.Dense(10, activation='softmax')
])



# Bước 4: Biên dịch mô hình
model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])



# Bước 5: Callback để lưu mô hình có độ chính xác tốt nhất
model_checkpoint = ModelCheckpoint('best_model.keras', save_best_only=True) # Thay đổi phần mở rộng thành .keras




# Bước 6: Đánh giá mô hình, dự đoán và in báo cáo phân loại
from sklearn.metrics import classification_report

# Đánh giá mô hình
test_loss, test_acc = model.evaluate(test_images, test_labels)
print(f"Độ chính xác: {test_acc}")

# Dự đoán và in báo cáo phân loại
predictions = model.predict(test_images)
predicted_classes = predictions.argmax(axis=1)

print("Báo cáo phân loại:")
print(classification_report(test_labels, predicted_classes))


# Bước 7: Dự đoán kết quả cuối cùng
import matplotlib.pyplot as plt

# Hiển thị 5 ảnh đầu tiên và kết quả dự đoán
for i in range(5):
    plt.imshow(test_images[i].reshape(28, 28), cmap=plt.cm.binary)
    plt.title(f"Dự đoán: {predictions[i].argmax()}")
    plt.show()