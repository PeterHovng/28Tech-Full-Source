#include <stdio.h>
#include <math.h>

int count_x (int a[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if(a[i] == x) count++;
    return count;
}

int main()
{
    int n, a[100], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);

    printf ("%d\n", count_x(a, n, x));

    return 0;
}














