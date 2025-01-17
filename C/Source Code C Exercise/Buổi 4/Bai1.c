#include "stdio.h"
#include <stdbool.h>

bool SoNguyenTo(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int SoChuSo(int num)
{
    int count = 0;
    for (int i = 0; i <= num; i++)
    {
        count++;
        num = num / 10;
        if (num == 0)
            break;
    }
    return count;
}

int main()
{
    int n, count = -1, dv, tong = 0;
    printf("n = ");
    scanf("%d", &n);

    if (SoNguyenTo(n))
        count = 0;
    for (int i = 1; i <= SoChuSo(n); i++)
    {
        dv = n % 10;
        tong += dv;
        if (SoNguyenTo(dv))
            count = 0;
    }
    if (SoNguyenTo(tong))
        count = 0;

    if (count == 0)
        printf("1");
    else
        printf("0");
}
