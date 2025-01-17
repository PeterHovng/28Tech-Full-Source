// Vẽ tam giác vuông trái rỗng
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int rong = 0;
    printf("*\n");
    for (int i = 1; i <= n - 2; i++)
    {
        printf("*");

        for (int j = 1; j <= rong; j++)
            printf(" ");
        rong++;

        printf("*\n");
    }
    for (int i = 1; i <= n; i++)
        printf("*");

    return 0;
}



