#include <stdio.h>

int main()
{
    // 1 <= n <= 1000,000,000
    unsigned int n;
    printf("n = ");
    scanf("%u", &n);
    printf("\n");
    // 1, 5, 10, 20, 100
    if (n < 5)
        printf("%u", n);
    else if (n < 10)
        printf("%u", n / 5 + n % 5);
    else if (n < 20)
        printf("%u", n / 10 + n % 10 / 5 + n % 10 % 5);
    else if (n < 100)
        printf("%u", n / 20 + n % 20 / 10 + n % 20 % 10 / 5 + n % 20 % 10 % 5);
    else
        printf("%u", n / 100 + n % 100 / 20 + n % 100 % 20 / 10 + n % 100 % 20 % 10 / 5 + n % 100 % 20 % 10 % 5);

    printf("\n");
    return 0;
}
