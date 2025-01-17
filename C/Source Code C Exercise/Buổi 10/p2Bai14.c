#include <stdio.h>

int Max (int a[], int n)
{
    int M = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > M)
            M = a[i];
    }
    return M;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d", Max(a, n));
    return 0;
}










