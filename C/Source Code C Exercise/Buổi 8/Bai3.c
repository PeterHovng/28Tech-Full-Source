#include <stdio.h>

int main ()
{
    // 1 <= n <= 10^9
    int n, a;
    printf("n = "); scanf("%d", &n);
    // Mahmoud started

    if (n % 2 == 0)
        printf("Mahmoud");
    else
        printf("Ehab");
    return 0;
}

