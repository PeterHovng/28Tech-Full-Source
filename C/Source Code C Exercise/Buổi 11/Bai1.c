#include <stdio.h>

void Max (int a[], int n)
{
    int M = -10e10;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > M)
            M = a[i];
    }

    int LN = M, count = 0;
    M = -10e10;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > M && a[i] < LN)
        {
            M = a[i];
        }
        if (a[i] == LN)
            count++;

    }
    if (count == 1)
        printf("%d\n%d", LN, M);
    else
        printf("%d", LN);
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    Max(a, n);
    return 0;
}










