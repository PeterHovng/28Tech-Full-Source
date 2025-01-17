#include <stdio.h>
#include <math.h>

int main()
{
    unsigned short x, y;
    printf("x = ");
    scanf("%hu", &x);
    printf("y = ");
    scanf("%hu", &y);
    printf("\n%.0f\n", pow(x, y));
    return 0;
}
