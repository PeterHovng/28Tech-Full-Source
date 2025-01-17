#include <stdio.h>

int Nguyen_To (int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i < n - 1; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int count_NT (int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (Nguyen_To(a[i]))
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

    printf ("%d", count_NT(a, n));
    return 0;
}











