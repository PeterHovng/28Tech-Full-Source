#include <stdio.h>
#include <math.h>

int so_chinh_phuong (int n)
{
    int x = sqrt(n);
    float y = sqrt(n);
    if (x * x == y * y)
        return 1;
    return 0;
}

int count_so_chinh_phuong (int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (so_chinh_phuong(a[i])) count++;
    return count;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf ("%d\n", count_so_chinh_phuong(a, n));

    for (int i = 0; i < n; i++)
        if (so_chinh_phuong(a[i])) printf("%d ", a[i]);

    return 0;
}













