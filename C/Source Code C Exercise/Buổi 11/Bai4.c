#include <stdio.h>

int count_so_chan (int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0) count++;
    return count;
}

int count_so_le (int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0) count++;
    return count;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf ("%d\n%d", count_so_chan(a, n), count_so_le(a, n));

    return 0;
}












