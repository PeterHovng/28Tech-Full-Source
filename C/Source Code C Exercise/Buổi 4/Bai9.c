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
    int a, b;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        if (SoNguyenTo(i))
            printf("%d\n", i);
    }
    return 0;
}
