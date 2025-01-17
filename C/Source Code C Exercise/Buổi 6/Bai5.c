// nửa hình thoi bên phải
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    // nửa trên
    int sao = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= sao; j++)
            printf("*");
        sao++;
        printf("\n");
    }
    // giữa
    for (int i = 1; i <= n; i++)
        printf("*");
    printf("\n");
    // nửa dưới
    sao = n - 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = sao; j >= 1; j--)
            printf("*");
        sao--;
        printf("\n");
    }
    return 0;
}


