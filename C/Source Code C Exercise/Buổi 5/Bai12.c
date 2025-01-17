#include <stdio.h>
#include <stdbool.h>

bool SNT (int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool chia_het_5 (int num)
{
    int tong = 0;
    while (num != 0)
    {
        int dv = num % 10;
        tong += dv;
        num /= 10;
    }
    if(tong % 5 == 0)
        return true;
    return false;
}

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    for(int i = 2; i <= n; i++)
    {
        if (SNT(i) && chia_het_5(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
