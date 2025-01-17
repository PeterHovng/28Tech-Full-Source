#include <stdio.h>

int main()
{
    long long a, b, c;
    printf("a = ");
    scanf("%lld", &a);
    printf("b = ");
    scanf("%lld", &b);
    printf("c = ");
    scanf("%lld", &c);
    printf("\n");
    if (a / b == c || b / c == a || c / a == b)
        printf("/");
    else
        printf("NOSOL");
    printf("\n");
    return 0;
}
