// Vẽ hình chứa hình thoi
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int ria = n, rong = 0; // rìa
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= ria; j++)
            printf("*");
        for (int j = 1; j <= rong; j++)
            printf(" ");
        for (int j = 1; j <= ria; j++)
            printf("*");
        printf("\n");
        ria--;
        rong += 2;
    }

    printf("*");
    for (int i = 1; i <= n * 2 - 2; i++)
        printf(" ");
    printf("*\n");

    ria = 2;
    rong = n * 2 - 4;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= ria; j++)
            printf("*");
        for (int j = 1; j <= rong; j++)
            printf(" ");
        for (int j = 1; j <= ria; j++)
            printf("*");
        printf("\n");
        ria++;
        rong -= 2;
    }
    return 0;
}

