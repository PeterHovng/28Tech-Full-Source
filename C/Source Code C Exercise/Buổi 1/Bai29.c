#include <stdio.h>

int main()
{
    float a, b;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    int dau, cuoi;
    cuoi = b;
    dau = a;
    if (a - dau != 0)
        dau = dau + 1;
    printf("\n");
    printf("so luong so nguyen trong doan [%.2f; %.2f] la: %d", a, b, cuoi - dau + 1);
    printf("\n");
    return 0;
}
