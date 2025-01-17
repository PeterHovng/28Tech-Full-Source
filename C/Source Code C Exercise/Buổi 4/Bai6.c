#include "stdio.h"

int main ()
{
    long long n;
    printf("n = ");
    scanf("%lld", &n);
    printf("\n");
    while(n % 2 == 0)
    {
        printf ("2 ");
        n = n / 2;
    }
    for(int i = 3; i * i <= n; i += 2)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        printf("%d ", n);
    }
    printf("\n");
    return 0;
}


