#include <stdio.h>

int So_hoan_hao (int num)
{
    int tong = 0;
    for (int i = 1; i <= num - 1; i++)
    {
        if (num % i == 0)
            tong += i;
    }
    if (tong == num)
        return 1;
    return 0;
}

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(So_hoan_hao(i))
            printf("%d ", i);
    }
    return 0;
}
