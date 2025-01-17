#include "stdio.h"

int main ()
{
    int num, tich = 1;
    printf("num = ");
    scanf("%d", &num);

    while (num != 0)
    {
        int dv = num % 10;
        tich *= dv;
        num /= 10;
    }
    printf("\n%d", tich);

    printf("\n");
    return 0;
}


