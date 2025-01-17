#include <stdio.h>

int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b); // b != 0
    printf("\na + b = %d", a + b);
    printf("\na - b = %d", a - b);
    printf("\na * b = %d", a * b);
    printf("\na / b = %.2f", (float)a / b);
    printf("\n");
    return 0;
}
