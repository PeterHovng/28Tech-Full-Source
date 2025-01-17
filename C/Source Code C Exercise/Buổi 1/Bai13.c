#include <stdio.h>

int main()
{
    // a >= b
    unsigned int a, b, c;
    printf("a = ");
    scanf("%u", &a);
    printf("b = ");
    scanf("%u", &b);
    printf("\nSo chia het cho b lon nhat ma khong vuot qua a la: %d", a / b * b);
    printf("\n");
    return 0;
}
