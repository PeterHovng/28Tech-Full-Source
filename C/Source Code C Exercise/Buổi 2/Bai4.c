#include <stdio.h>

int main()
{
    // 1 ≤ a, b, k ≤ 10^9
    unsigned int a, b, k;
    printf("a = ");
    scanf("%u", &a);
    printf("b = ");
    scanf("%u", &b);
    printf("k = ");
    scanf("%u", &k);
    printf("\n");
    if (k % 2 == 0)
        printf("%d", (k / 2) * a - (k / 2) * b);
    else
        printf("%d", (k / 2) * a - (k / 2) * b + a);
    return 0;
}
