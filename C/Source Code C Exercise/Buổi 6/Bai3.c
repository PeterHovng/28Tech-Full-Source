// hình bình hành
#include <stdio.h>

int main()
{
    int n, m, count = 0;
    printf("n = "); scanf("%d", &n);
    printf("m = "); scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - 1; k > count; k--)
                printf(" ");

        count++;

        for (int j = 1; j <= m; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}

