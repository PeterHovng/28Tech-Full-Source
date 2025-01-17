#include <stdio.h>
#include <math.h>

int main()
{
    short x, A;
    printf("x = ");
    scanf("%hi", &x);
    A = pow(x, 3) + 3 * pow(x, 2) + x + 1;
    printf("\ngia tri cua bieu thuc A(x) = x^3 + 3x^2 + x + 1 khi x = %hi la: A(x) = %hi\n", x, A);
    return 0;
}
