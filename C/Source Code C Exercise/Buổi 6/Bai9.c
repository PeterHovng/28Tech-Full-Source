#include <stdio.h>

int main ()
{
    int n, count = 1;
    printf("n = "); scanf("%d", &n);
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d", count);
            if (j == 5)
                break;
            count++;
        }
        if(count % 5 == 0)
            printf("\n");
        count++;
    }

    for (int i = 3; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", count);
            if (j == 5)
                break;
            count++;
        }
        if(count % 5 == 0)
            printf("\n");
        count++;
    }
    return 0;
}
