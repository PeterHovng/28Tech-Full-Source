#include "stdio.h"
#include <stdbool.h>

bool SoNguyenTo (int num)
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

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (SoNguyenTo(i))
            printf("%d ", i);
    }
    return 0;
}

