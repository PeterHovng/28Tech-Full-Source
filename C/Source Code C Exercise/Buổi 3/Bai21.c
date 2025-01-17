#include <stdio.h>
#include <math.h>

int main()
{
    // 1 <= n <= 1,000,000
    unsigned int n, SoTuan = 0;
    printf("n = ");
    scanf("%u", &n);
    printf("\n");
    SoTuan = n / 7;
    printf ("%u %u", SoTuan * 2, SoTuan * 2);
    printf("\n");
    return 0;
}

