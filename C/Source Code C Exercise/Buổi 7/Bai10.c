// Hình tam giác
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    int num = n, count = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= count; j++)
            printf("%d", j);
        count++;

        printf("\n");
    }
    return 0;
}








