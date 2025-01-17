#include "stdio.h"
#include <math.h>

int main ()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int num = i, j = i, tong = 0, count = 0; // reset tổng và đếm
        while(j != 0)
            {
                count++; // số chữ số
                j /= 10;
            }
        while (num != 0)
        {
            int dv = num % 10;
            tong += pow(dv, count);
            num /= 10;
        }
        if (i == tong)
            printf("\n%d", i);
    }
    printf("\n");
    return 0;
}


