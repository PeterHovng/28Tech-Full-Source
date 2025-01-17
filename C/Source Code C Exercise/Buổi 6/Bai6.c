// tam giác vuông ngược phải

#include <stdio.h>

int main()
{
    int n, rong = 0;
    printf("n = "); scanf("%d", &n);
    int sao = n;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 0; i <= rong - 1; i++)
            printf(" ");
        rong++;
        for (int j = sao; j >= 1; j--)
            printf("*");
        sao--;
        printf("\n");
    }
    return 0;
}



