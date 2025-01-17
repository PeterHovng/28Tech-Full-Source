#include <stdio.h>
#include <math.h>

// Tính số lượng chữ số 0 tận cùng của 200000! bằng cách đếm số lần chia hết cho 5 trong các số từ 1 đến 200000.
int so_0_tan_cung(int n)
{
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}

int main()
{
    // 1 ≤ n ≤ 10^9
    unsigned long long n, count = 0;
    printf("n = ");
    scanf("%d", &n);
    printf("\n");
    printf("So chu so 0 tan cung cua %d! la: %d\n", n, so_0_tan_cung(n));
    printf("\n");
    return 0;
}



