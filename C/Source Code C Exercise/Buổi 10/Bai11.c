#include <stdio.h>

int giai_thua(int n)
{
    if (n == 1)
        return 1;
    else
        return n * giai_thua(n - 1);
}

int C(int n, int k)
{
    return giai_thua(n) / (giai_thua(k) * giai_thua(n - k));
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", C(a, b));
    return 0;
}

