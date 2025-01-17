#include <stdio.h>

int GCD(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return GCD(b, a % b);
}

int main()
{
    int a, b, max;
    scanf("%d", &a);
    scanf("%d", &b);
    max = a;
    if (b >= max)
    {
        max = b;
        printf("%d", GCD(b, a));
    }
    else
        printf("%d", GCD(a, b));
    return 0;
}

