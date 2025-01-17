#include <stdio.h>

int main()
{
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    if (a, b, c > 0 && a + b > c && a + c > b && c + b > a)
        printf("\nTam giac hop le");
    else
        printf("\nTam giac khong hop le");
    printf("\n");
    return 0;
}
