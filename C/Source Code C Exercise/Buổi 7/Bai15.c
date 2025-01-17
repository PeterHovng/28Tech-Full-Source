// Hình tam giác
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        int num = 0;
        for(int j = 1; j <= i; j++)
        {
            num += 2;
            printf("%d", num);
        }
        for(int j = 1; j <= i - 1; j++)
        {
            num -= 2;
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}




