#include <stdio.h>

int main()
{
    unsigned long long n;
    printf("n = ");
    scanf("%ull", &n);
    printf("\nTong Sn = -1 + 2 - 3 + 4 - 5 + 6 + ... + (-1)^n*n la:\n");
    int Sn;
    if (n % 2 == 0)
        Sn = n / 2;
    else
        Sn = -(n + 1) / 2;
    printf("Sn = %d", Sn);
    printf("\n");
    return 0;
}
