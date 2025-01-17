#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    // 2 <= n <= 100000
    unsigned long long n;
    printf("n = ");
    scanf("%llu", &n);
    printf("\n");
    if (n % 2 == 0)
    {
        printf("%llu\n\n", n / 2);
        for (int i = 1; i <= n / 2; i++)
            printf("2 ");
    }
    else
    {
        printf("%llu\n\n", n / 2);
        for (int i = 1; i <= n / 2 - 1; i++)
            printf("2 ");
        printf("3");
    }

    printf("\n");
    return 0;
}
