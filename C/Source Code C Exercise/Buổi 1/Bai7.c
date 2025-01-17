#include <stdio.h>

int main()
{
    unsigned short C;
    printf("nhap vao do C = ");
    scanf("%hu", &C);
    float F = (C * 9 / 5) + 32;
    printf("\nchuyen don vi do nhiet do tu C sang F\n");
    printf("F = %.2f", F);
    printf("\n");
    return 0;
}
