#include <stdio.h>

int so_am (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d", so_am(a, n));
    return 0;
}









