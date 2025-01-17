// Vẽ tam giác vuông phải ngược rỗng
#include <stdio.h>

int main()
{
    int n,kc = 0;
    printf("n = "); scanf("%d", &n);
    int rong = n;
    // line 1
    for (int i = 1; i <= n; i++)
        printf("*");
    printf("\n");
    // phần thân rỗng
    for (int i = 1; i <= n - 2; i++)
    {
        // khoảng cách với lề trái
        for (int j = 0; j <= kc; j++)
            printf(" ");
        kc++;
        printf("*");
        // phần rỗng
        for (int j = rong - 3; j >= 1; j--)
            printf(" ");
        rong--;

        printf("*");
        printf("\n");
    }
    for (int j = 2; j <= n; j++)
            printf(" ");
    printf("*");
    return 0;
}


