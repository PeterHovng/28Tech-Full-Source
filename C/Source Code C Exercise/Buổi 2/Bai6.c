#include <stdio.h>

int main()
{
    // 1 <= n <= 10^12, 1 <= a, b <= 1000
    unsigned long long n;
    printf("n = ");
    scanf("%llu", &n);
    unsigned short a, b;
    printf("a = ");
    scanf("%hu", &a);
    printf("b = ");
    scanf("%hu", &b);
    printf("\n");
    if (a * 2 >= b)
    {
        if (n % 2 == 0)
            printf("%llu", n / 2 * b);
        else
            printf("%llu", n / 2 * b + a);
    }
    else
    {
        printf("%llu", n * a);
    }
    printf("\n");
    return 0;
}
