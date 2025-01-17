#include <stdio.h>

int main()
{
    // 1 ≤ k, w ≤ 1000, 0 ≤ n ≤ 10^9
    unsigned int k, n, w;
    printf("k = ");
    scanf("%u", &k);
    printf("n = ");
    scanf("%u", &n);
    printf("w = ");
    scanf("%u", &w);
    printf("\n");
    if ((((1 + w) * w) / 2) * k > n)
        printf("%u", (((1 + w) * w) / 2) * k - n);
    else
        printf("0");
    printf("\n");
    return 0;
}
