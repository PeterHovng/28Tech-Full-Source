#include <stdio.h>

int count (int a[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            x++;
    }
    return x;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf ("%d", count(a, n));
    return 0;
}





