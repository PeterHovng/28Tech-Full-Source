#include <stdio.h>

int main()
{
    unsigned int n, Sn;
    printf("n = ");
    scanf("%u", &n);
    printf("\nTong Sn = 2 + 4 + 6 + 8 + ... + 2*n la:\n");
    Sn = n * (n + 1);
    printf("Sn = %u", Sn);
    printf("\n");
    return 0;
}
