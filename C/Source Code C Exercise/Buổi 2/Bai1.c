#include <stdio.h>
#include <math.h>

int main()
{
    short a, b, c;
    printf("a = ");
    scanf("%hi", &a);
    printf("b = ");
    scanf("%hi", &b);
    printf("c = ");
    scanf("%hi", &c);

    float x, y, z;
    z = sqrt((b * c) / a * 1.0);
    x = c / z * 1.0;
    y = b / z * 1.0;

    printf("%.2f", x * 4 + y * 4 + z * 4);
    return 0;
}
