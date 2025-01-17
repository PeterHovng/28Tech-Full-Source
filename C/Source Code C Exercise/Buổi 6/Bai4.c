// tam giác vuông ngược rỗng
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int rong = n;
    for (int i = 1; i <= n; i++)
        printf("*");
    printf("\n");
    for (int i = 1; i <= n - 2; i++)
    {
        printf("*");

        for (int j = rong - 3; j >= 1; j--)
            printf(" ");
        rong--;

        printf("*");
        printf("\n");
    }
    printf("*");
    return 0;
}


