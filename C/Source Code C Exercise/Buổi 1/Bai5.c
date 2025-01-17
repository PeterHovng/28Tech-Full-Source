#include <stdio.h>

#define PI 3.14

int main()
{
    unsigned short r;
    printf("r = ");
    scanf("%hu", &r);
    printf("\nChu vi hinh tron la: C = %.2f", 2 * PI * r);
    printf("\nDien tich hinh tron la: S = %.2f", PI * r * r);
    printf("\n");
    return 0;
}
