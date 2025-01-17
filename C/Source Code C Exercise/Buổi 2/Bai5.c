#include <stdio.h>

int main()
{
    // - 10^9 ≤ a, b <=10^9, 1 ≤ s ≤ 2.10^9
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    unsigned long long s;
    printf("s = ");
    scanf("%llu", &s);
    printf("\n");
    c = a + b; // (a, b)
    if (c > s)
        printf("NO");
    else
    {
        if (s % 2 == 0)
            printf("YES");
        else
            printf("NO");
    }
    printf("\n");
    return 0;
}
