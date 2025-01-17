#include "stdio.h"
#include <math.h>
// so armstrong la so co tong luy thua n cua cac chu so bang chinh no (n la so chu so)
int main ()
{
    int n, tong = 0, count = 0;
    printf("n = ");
    scanf("%d", &n);

    int num = n, number = n;
    while(number != 0)
        {
            count++; // số chữ số
            number /= 10;
        }
    while (num != 0)
    {
        int dv = num % 10;
        tong += pow(dv, count);
        num /= 10;
    }
    if (n == tong)
        printf("\n1");
    else
        printf("\n0");

    printf("\n");
    return 0;
}



