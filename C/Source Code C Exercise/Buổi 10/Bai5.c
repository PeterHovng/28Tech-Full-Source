#include <stdio.h>

int giaithua (int n)
{
    if (n == 1)
        return 1;
    else
        return n * giaithua(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", giaithua(n));
    return 0;
}

