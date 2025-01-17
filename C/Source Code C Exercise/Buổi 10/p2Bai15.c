#include <stdio.h>

int DX (int a[], int n)
{
    int j = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[j])
            return 0;
        j--;
    }
    return 1;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d", DX(a, n));
    return 0;
}











