# CNN-based Handwritten Digit Recognition Using MNIST
Đây là đồ án Trí tuệ nhân tạo: "Nhận diện chữ số viết tay dựa trên CNN với MNIST". Dự án được thực hiện bằng ngôn ngữ Python trong Google Colab. Mục tiêu của dự án là xây dựng một mô hình CNN có khả năng nhận diện chữ số viết tay từ bộ dữ liệu MNIST.

## Yêu cầu

### Phần mềm

- Google Colab
- Python 3.x
- Thư viện cần thiết:
  - TensorFlow
  - scikit-learn
  - matplotlib

## Cài đặt

1. Cài đặt TensorFlow:

   ```bash
   !pip install tensorflow
   ```

2. Nhập các thư viện cần thiết:

   ```python
   import tensorflow as tf
   from tensorflow.keras import layers, models
   from tensorflow.keras.preprocessing.image import ImageDataGenerator
   from sklearn.metrics import classification_report
   import matplotlib.pyplot as plt
   ```

## Quy trình thực hiện

### Bước 1: Tải và Chuẩn bị dữ liệu

- Tải bộ dữ liệu MNIST từ TensorFlow.
- Chuẩn hóa dữ liệu (normalize).
- Tăng cường dữ liệu huấn luyện bằng `ImageDataGenerator`.

### Bước 2: Xây dựng Mô hình CNN

- Sử dụng một mô hình CNN với các lớp:
  - Convolutional Layer
  - MaxPooling Layer
  - Dropout Layer
  - Dense Layer
- Biên dịch mô hình với:
  - Optimizer: Adam
  - Loss: Sparse Categorical Crossentropy
  - Metrics: Accuracy

### Bước 3: Huấn luyện Mô hình

- Sử dụng callback `ModelCheckpoint` để lưu lại mô hình tốt nhất.

### Bước 4: Đánh giá và Dự đoán

- Đánh giá mô hình trên bộ dữ liệu test.
- Tạo báo cáo phân loại và hiển thị kết quả dự đoán.

## Mã nguồn

Chi tiết về mã nguồn được cung cấp trong file `main.py`.

Dưới đây là ví dụ mã nguồn:

```python
# Bước 1: Cài đặt TensorFlow và các thư viện cần thiết 
!pip install tensorflow

# Bước 2: Tải và chuẩn bị dữ liệu
import tensorflow as tf
from tensorflow.keras import layers, models
from tensorflow.keras.preprocessing.image import ImageDataGenerator

# Tải dữ liệu MNIST
mnist = tf.keras.datasets.mnist
(train_images, train_labels), (test_images, test_labels) = mnist.load_data()

# Chuẩn hóa dữ liệu
train_images = train_images.reshape((60000, 28, 28, 1)).astype('float32') / 255
test_images = test_images.reshape((10000, 28, 28, 1)).astype('float32') / 255

# Tăng cường dữ liệu
datagen = ImageDataGenerator(
    rotation_range=10,       # Xoay ảnh ngẫu nhiên
    width_shift_range=0.1,   # Dịch chuyển ảnh theo chiều ngang
    height_shift_range=0.1,  # Dịch chuyển ảnh theo chiều dọc
    shear_range=0.1,         # Biến dạng ảnh
    zoom_range=0.1,          # Phóng to thu nhỏ ảnh
    horizontal_flip=True,    # Lật ảnh ngang
    fill_mode='nearest'      # Phương thức điền các pixel bị thiếu
)

datagen.fit(train_images)

# Bước 3: Xây dựng mô hình CNN
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

# Biên dịch mô hình
model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

# Bước 4: Callback để lưu mô hình tốt nhất
from tensorflow.keras.callbacks import ModelCheckpoint
model_checkpoint = ModelCheckpoint('best_model.keras', save_best_only=True)

# Bước 5: Đánh giá mô hình, dự đoán và in báo cáo phân loại
from sklearn.metrics import classification_report

# Đánh giá mô hình
model.fit(datagen.flow(train_images, train_labels, batch_size=64),
          epochs=5,
          validation_data=(test_images, test_labels),
          callbacks=[model_checkpoint])

# Tái tải mô hình tốt nhất
best_model = models.load_model('best_model.keras')
test_loss, test_acc = best_model.evaluate(test_images, test_labels)
print(f"Độ chính xác: {test_acc}")

# Dự đoán và in báo cáo phân loại
predictions = best_model.predict(test_images)
predicted_classes = predictions.argmax(axis=1)

print("Báo cáo phân loại:")
print(classification_report(test_labels, predicted_classes))

# Bước 6: Dự đoán kết quả cuối cùng
# Hiển thị 5 ảnh đầu tiên và kết quả dự đoán
for i in range(5):
    plt.imshow(test_images[i].reshape(28, 28), cmap=plt.cm.binary)
    plt.title(f"Dự đoán: {predictions[i].argmax()}")
    plt.show()
```

## Kết quả

- Mô hình đạt độ chính xác cao khi đệ huấn và test.
- Báo cáo phân loại được hiển thị dựa trên kết quả test.

## Tác giả

Họ và tên: Lê Hoàng Gia Đại
Mã số sinh viên: 2280618445
Lớp: 22DTHG3\
Email: [leehoanggiadai@gmail.com](mailto\:leehoanggiadai@gmail.com)

## Giảng viên hướng dẫn

Họ và tên: TS. Huỳnh Quốc Bảo 
Email: [hq.bao@hutech.edu.vn](mailto\:hq.bao@hutech.edu.vn)

