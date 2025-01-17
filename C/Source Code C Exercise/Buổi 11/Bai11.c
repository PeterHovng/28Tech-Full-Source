#include <stdio.h>

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        if (i == 0) printf("%d %d\n", a[1] - a[0], a[n - 1] - a[0]);
        if (i > 0 && i < n - 1)
        {
            if (a[i] - a[i - 1] < a[i + 1] - a[i])
                printf("%d ", a[i] - a[i - 1]);
            else
                printf("%d ", a[i + 1] - a[i]);

            if (a[i] - a[0] < a[n - 1] - a[i])
                printf("%d\n", a[n - 1] - a[i]);
            else
                printf("%d\n", a[i] - a[0]);
        }
        if (i == n - 1) printf("%d %d\n", a[i] - a[i - 1], a[i] - a[0]);
    }
    return 0;
}












