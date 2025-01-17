#include <stdio.h>

int So_thuan_nghich (int n)
{
    int num = n, x = 0;
    while(n != 0)
    {
        x = x * 10 + n % 10;
        n /= 10;
    }

    if (x == num)
        return 1;
    return 0;
}

int count_so_thuan_nghich (int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (So_thuan_nghich(a[i]))
            count++;
    }
    return count;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf ("%d\n", count_so_thuan_nghich(a, n));
    for (int i = 0; i < n; i++)
    {
        if (So_thuan_nghich(a[i]))
            printf("%d ", a[i]);
    }
    return 0;
}












