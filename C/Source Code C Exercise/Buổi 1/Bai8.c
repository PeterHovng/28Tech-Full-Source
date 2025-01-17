#include <stdio.h>

int main()
{
    unsigned int n, Sn;
    printf("n = ");
    scanf("%u", &n);
    printf("\nTong Sn = 1 + 2 + 3 + 4 + ... + n la:\n");
    Sn = ((n + 1) * n) / 2;
    printf("Sn = %u", Sn);
    printf("\n");
    return 0;
}
