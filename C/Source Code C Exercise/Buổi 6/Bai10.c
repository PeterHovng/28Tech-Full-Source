#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("*");
    printf("\n");
    for (int i = 1; i <= n - 2; i++)
    {
        printf("*");
        for (int j = 1; j <= n - 2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
        printf("*");
    return 0;
}
