#include <stdio.h>

int main()
{
    unsigned short n, Sn;
    printf("n = ");
    scanf("%hu", &n);
    printf("\nTong Sn = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2 la:\n");
    Sn = (n * (n + 1) * (2 * n + 1)) / 6;
    printf("Sn = %hu", Sn);
    printf("\n");
    return 0;
}
