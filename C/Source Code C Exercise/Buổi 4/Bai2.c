#include "stdio.h"
#include <stdbool.h>

int main ()
{
    unsigned short a, b;
    printf("a = ");
    scanf("%hu", &a);
    printf("b = ");
    scanf("%hu", &b);
    printf("\n");
    for (int i = 1; i <= b; i++)
    {
        int tong = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                tong += j;
        }
        if (tong != 0 && tong == i && tong > a)
            printf("%d\n", i);
    }
    return 0;
}

