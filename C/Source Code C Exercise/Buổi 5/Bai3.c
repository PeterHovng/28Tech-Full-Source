#include <stdio.h>

int main ()
{
    int n, tong = 0;
    printf("n = "); scanf("%d", &n);
    while (n != 0)
    {
        int dv = n % 10;
        tong += dv;
        n /= 10;
    }
    printf("%d", tong);
    return 0;
}

