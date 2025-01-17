// Hình tam giác
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    int kc = n - 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= kc; j++)
            printf(" ");
        kc--;

        int a = 1;
        for(int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a += 2;
        }

        int b = a - 2;
        for(int j = 1; j <= i - 1; j++)
        {
            b -= 2;
            printf("%d", b);
        }

        printf("\n");
    }
    return 0;
}





