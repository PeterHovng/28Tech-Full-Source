#include <stdio.h>
#include <math.h>

int main()
{
    short x1, y1, x2, y2;
    printf("x1 = ");
    scanf("%hi", &x1);
    printf("y1 = ");
    scanf("%hi", &y1);
    printf("x2 = ");
    scanf("%hi", &x2);
    printf("y2 = ");
    scanf("%hi", &y2);
    float d;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nkhoang cach giua 2 diem (x1, y1) va (x2, y2) la: d = %.2f", d);
    printf("\n");
    return 0;
}
