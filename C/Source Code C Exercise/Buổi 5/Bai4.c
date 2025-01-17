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

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    if (SoNguyenTo(n))
        printf("1");
    else
        printf("0");
    return 0;
}
