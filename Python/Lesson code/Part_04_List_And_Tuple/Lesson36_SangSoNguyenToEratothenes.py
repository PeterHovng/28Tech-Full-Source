from math import*

"""
    Thông thường dùng để kiểm tra số nguyên tố trong 1 khoảng k
    => O(k * log2(n)) => O(nlog2(n))
    Thay vì thế dùng sàng số nguyên tố Sieve Eratothenes: O(nlog(log(n)))
    - 0 -> 10^6
    B1: coi tất cả các số từ 0 -> n là số nguyên tố: prime[i] = True
    B2: Bội của một số nguyên tố => không là số nguyên tố 
        - Loại thủ công số 0, 1 ko là số nguyên tố
        - Duyệt từ 2-> căn bậc 2 của n:
            + nếu prime[i] = True => Duyệt các bội của prime[i] và <= n
            + Cho các bội prime[i] = False
    B3: Tiếp tục vòng for
    
    - Ứng dụng của bài toàn sàng số nguyên tố:
        + Liệt kê, đếm các số nguyên tố trong khoảng từ 0 -> giới hạn trong khoảng 10^7
        + Bài toán kiểm tra 1 số có phải số nguyên tố hay không trong nhiều test case
    - LƯU ý:
        + Nếu chỉ kiểm tra 1 số => Không nên dùng sàng số nguyên tố
    
"""

prime = [True] * (10**6 + 1)

def sieve():
    prime[0], prime[1] = False, False
    for i in range(2, isqrt(10**6) + 1):
        # Kiểm tra i là số nguyên tố => loại bỏ bội của i
        if prime[i]:
            # Duyệt bội từ i * i chứ đừng 2*i vì đã bị loại bởi các bội trước đó rồi
            for j in range(i * i, 10**6 + 1, i):
                prime[j] = False
    

if __name__ == '__main__':
    sieve()
    for i in range(1, 100):
        if (prime[i]): # O(1)
            print(i, end = ' ')