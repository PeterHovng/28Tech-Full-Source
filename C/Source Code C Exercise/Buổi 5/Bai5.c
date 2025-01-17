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

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    printf("%d", giai_thua(n));

    return 0;
}

