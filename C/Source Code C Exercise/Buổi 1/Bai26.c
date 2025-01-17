#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("\n");
    if (a, b, c > 0 && a + b > c && a + c > b && c + b > a)
    {
        if (a == b && a == c && b == c)
            printf("Tam giac deu");
        else if (a == b || a == c || b == c)
            printf("Tam giac can");
        else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
            printf("Tam giac vuong");
        else
            printf("Tam giac thuong");
    }
    else
        printf("\nTam giac khong hop le");
    printf("\n");
    return 0;
}
