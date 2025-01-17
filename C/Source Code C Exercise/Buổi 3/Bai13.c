#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long n, tong = 0;
    printf("n = ");
    scanf("%llu", &n);
    do
    {
        tong += n % 10;
        n = n / 10;
    }while(n > 0);
    printf("%llu", tong);
    return 0;
}

