// Hình tam giác
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    int count = 0, num = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            num += count;
            printf("%d ", num);
            count++;
        }
        printf("\n");
    }
    return 0;
}



