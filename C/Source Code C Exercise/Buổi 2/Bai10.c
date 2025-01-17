#include <stdio.h>

int main()
{
    // 1 <= d1, d2, d3 <= 10^8
    unsigned int d1, d2, d3;
    printf("d1 = ");
    scanf("%u", &d1);
    printf("d2 = ");
    scanf("%u", &d2);
    printf("d3 = ");
    scanf("%u", &d3);
    printf("\n");
    if (d1 + d2 + d3 >= d1 * 2 + d2 * 2)
        printf("%u", d1 * 2 + d2 * 2);
    else
        printf("%u", d1 + d2 + d3);
    printf("\n");
    return 0;
}
