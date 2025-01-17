#include <stdio.h>

int main()
{
    unsigned int a, b, c, S;
    printf("a = ");
    scanf("%u", &a);
    printf("b = ");
    scanf("%u", &b);
    printf("c = ");
    scanf("%u", &c);
    S = a * (b + c) + b * (a + c);
    printf("\ngia tri cua bieu thuc S = a*(b+c) + b*(a+c) la: S = %u\n", S);
    return 0;
}
