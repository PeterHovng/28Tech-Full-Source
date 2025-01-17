#include <stdio.h>

int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("\nphan nguyen cua phep chia hai so nguyen a va b la: a / b = %d\n", a / b);
    printf("\nphan du cua phep chia hai so nguyen a va b la: a %% b = %d", a % b);
    printf("\n");
    return 0;
}
