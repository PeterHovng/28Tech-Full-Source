#include <stdio.h>
#include <stdbool.h>

int giai_thua (int num)
{
    int n = 1;
    for (int i = 1; i <= num; i++)
    {
        n *= i;
    }
    return n;
}

int Strong (int num)
{
    int tong = 0, n = num;
    while (num != 0)
    {
        int dv = num % 10;
        tong += giai_thua(dv);
        num /= 10;
    }
    if (tong == n)
        return true;
    return false;
}

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    if(Strong(n))
        printf("1");
    else
        printf("0");
    return 0;
}
