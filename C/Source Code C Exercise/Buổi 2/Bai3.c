#include <stdio.h>

int main()
{
    // 1 ≤ n, m, a ≤ 10^9
    unsigned int m, n, a;
    printf("m = ");
    scanf("%u", &m);
    printf("n = ");
    scanf("%u", &n);
    printf("a = ");
    scanf("%u", &a);
    printf("\n");
    if (m > a && n < a)
        printf("%u", m / a + 1);
    if (n > a && m < a)
        printf("%u", n / a + 1);
    if (m > a && n > a)
        printf("%u", (m / a + 1) * 2);
    if (m < a && n < a)
        printf("1");
    return 0;
}
