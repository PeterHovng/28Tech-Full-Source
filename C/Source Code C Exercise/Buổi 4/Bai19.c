#include <stdio.h>
#include <stdbool.h>

bool So_hoan_hao (int n)
{
    int tong = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            tong += i;
    }
    if (tong == n)
        return true;
    return false;
}

int main ()
{
    int n, a, b;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    for(int i = a; i <= b; i++)
    {
        if (So_hoan_hao(i))
            printf("\n%d", i);
    }
    return 0;
}

