#include <stdio.h>

int main()
{
    // 1 ≤ n ≤ 100000, 1 ≤ S ≤ 10^9
    unsigned int n, S;
    printf("n = ");
    scanf("%u", &n);
    printf("S = ");
    scanf("%u", &S);
    printf("\n");
    if (S > n)
        printf("%hi", S / n + 1);
    else
        printf("1");
    printf("\n");
    return 0;
}
