// hình chữ nhật 1 0
#include <stdio.h>

int main()
{
    int n, m;
    printf("n = "); scanf("%d", &n);
    printf("m = "); scanf("%d", &m);
    printf("\n");
    for (int i = 1; i <= n/2; i++)
    {
        for (int j = 1; j <= m; j++)
            printf("1");
        printf("\n");
        for (int j = 1; j <= m; j++)
            printf("0");
        printf("\n");
    }
    if (n % 2 != 0)
    {
        for (int j = 1; j <= m; j++)
            printf("1");
    }
    printf("\n");
    return 0;
}


