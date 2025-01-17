#include <stdio.h>

float AVG (int a[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x += a[i];
    }
    return x * 1.0 / n;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf ("%.2f", AVG(a, n));

    return 0;
}













