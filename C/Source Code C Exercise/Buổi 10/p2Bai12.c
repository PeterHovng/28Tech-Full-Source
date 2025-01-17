#include <stdio.h>

int count (int a[], int n)
{
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1) x1 = 1;
        if (a[i] == 2) x2 = 1;
        if (a[i] == 3) x3 = 1;
        if (a[i] == 4) x4 = 1;
        if (a[i] == 5) x5 = 1;
        if (a[i] == 6) x6 = 1;
        if (a[i] == 7) x7 = 1;
        if (a[i] == 8) x8 = 1;
        if (a[i] == 9) x9 = 1;
    }
    return x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d", count(a, n));
    return 0;
}








