#include <stdio.h>

int main()
{
    long long a, b, c, d, e, min;
    printf("a = ");
    scanf("%lld", &a);
    printf("b = ");
    scanf("%lld", &b);
    printf("c = ");
    scanf("%lld", &c);
    printf("d = ");
    scanf("%lld", &d);
    printf("e = ");
    scanf("%lld", &e);
    printf("\n");
    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    if (e < min)
        min = e;

    if (min == a)
        a = 10e10;
    if (min == b)
        b = 10e10;
    if (min == c)
        c = 10e10;
    if (min == d)
        d = 10e10;
    if (min == e)
        e = 10e10;

    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    if (e < min)
        min = e;

    printf("so nho thu nhi la: %lld", min);
    printf("\n");
    return 0;
}
