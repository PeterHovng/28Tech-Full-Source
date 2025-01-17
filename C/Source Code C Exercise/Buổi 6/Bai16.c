// Vẽ tam giác vuông trái
#include <stdio.h>

int main()
{
    int n, count = 1;
    printf("n = "); scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= count; j++)
            printf("*");
        printf("\n");
        count++;
    }

    return 0;
}




