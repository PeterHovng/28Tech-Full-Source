#include <stdio.h>

int main()
{
    long long n;
    printf("n = ");
    scanf("%lld", &n);

    if (n % 5 == 0 && n % 3 == 0)
        printf("\n1");
    else
        printf("\n0");

    printf("\n");
    return 0;
}
