// hình chữ nhật
#include <stdio.h>

int main()
{
    int n, m;
    printf("n = "); scanf("%d", &n);
    printf("m = "); scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            printf("1");

        printf("\n");
    }
    return 0;
}

