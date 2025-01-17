#include <stdio.h>

int main()
{
    unsigned int n;
    printf("n = ");
    scanf("%u", &n);
    printf("\nTong Sn = 1/(1*2) + 1/(2*3) + 1/(3*4) + ... + 1/n*(n+1) la:\n");
    float Sn;
    Sn = (float)n / (n + 1);
    printf("Sn = %.2f", Sn);
    printf("\n");
    return 0;
}
