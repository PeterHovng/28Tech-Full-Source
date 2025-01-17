#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int num = n, phai = n - 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%d", n);
    }
    printf("\n");

    for (int i = 1; i <= num - 1; i++)
    {
        n = num + 1;
        for (int j = 1; j <= i + 1; j++)
        {
            n--;
            printf("%d", n);
        }
        for (int j = 2; j <= phai; j++)
        {
            printf("%d", n);
        }
        phai--;
        printf("\n");
    }

    return 0;
}

