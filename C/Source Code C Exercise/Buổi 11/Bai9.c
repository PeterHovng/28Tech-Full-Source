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

int Min (int a[], int n)
{
    int M = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < M)
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

    printf("%d ", Max(a, n));
    for (int i = n - 1; i >= 0; i--)
        if(a[i] == Max(a, n))
        {
            printf("%d\n", i + 1);
            break;
        }
    printf("%d ", Min(a, n));
    for (int i = n - 1; i >= 0; i--)
        if(a[i] == Min(a, n))
        {
            printf("%d\n", i + 1);
            break;
        }
    return 0;
}











