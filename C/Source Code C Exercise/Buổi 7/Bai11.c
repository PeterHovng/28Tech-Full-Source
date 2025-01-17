// Hình tam giác
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        int a = n - 1, b = i;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", b);
            b += a;
            a--;
        }
        printf("\n");
    }
    return 0;
}

