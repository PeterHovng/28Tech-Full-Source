#include <stdio.h>

int main()
{
    // 0 < n ≤ 10000, 1 < m <= 10
    unsigned short n, m, k;
    printf("n = ");
    scanf("%hu", &n);
    printf("m = ");
    scanf("%hu", &m);
    printf("\n");
    int min = ceil(n / 2);
    printf("%.0f", ceil(1.0 * min / m) * m);
    printf("\n");
    return 0;
}
