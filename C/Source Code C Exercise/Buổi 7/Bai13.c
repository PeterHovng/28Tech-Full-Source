// Hình tam giác
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    int le = 1;
    for(int i = 1; i <= n; i++)
    {
        int chan = le - 1 + i;
        if (i % 2 != 0)
        {
            for(int j = 1; j <= i; j++)
            {
                printf("%d ", le);
                le++;
            }
        }
        else
        {
            for(int j = 1; j <= i; j++)
            {
                printf("%d ", chan);
                chan--;
                le++;
            }
        }

        printf("\n");
    }
    return 0;
}


