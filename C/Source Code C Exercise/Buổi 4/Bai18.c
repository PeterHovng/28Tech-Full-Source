#include <stdio.h>

int main ()
{
    int n, tong = 0;
    printf("n = "); scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            tong += i;
    }
    if (tong == n)
        printf("1");
    else
        printf("0");
    return 0;
}
