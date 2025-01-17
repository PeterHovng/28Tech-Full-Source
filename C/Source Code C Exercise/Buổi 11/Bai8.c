#include <stdio.h>

int GCD(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return GCD(b, a % b);
}

int So_nt_cungnhau (int n, int x)
{
    int max = n, min = x;
    if (x >= max)
    {
        max = x;
        min = n;
    }
    if (GCD(max, min) == 1)
        return 1;
    return 0;
}

int count_So_nt_cungnhau (int a[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (GCD(a[i], x) == 1) count++;
    return count;
}

int main()
{
    int n, a[100], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);

    printf ("%d\n", count_So_nt_cungnhau(a, n, x));
    for (int i = 0; i < n; i++)
        if (So_nt_cungnhau(a[i], x)) printf("%d ", a[i]);
    return 0;
}















