// Vẽ tam giác vuông phải rỗng
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int rong = 0, kc = n - 2;

    // line 1
    for (int i = 1; i <= n - 1; i++)
        printf(" ");
    printf("*\n");

    // phần thân rỗng
    for (int i = 1; i <= n - 2; i++)
    {
        // khoảng cách với lề trái
        for (int j = 1; j <= kc; j++)
            printf(" ");
        kc--;
        printf("*");
        // phần rỗng
        for (int j = 1; j <= rong; j++)
            printf(" ");
        rong++;
        printf("*\n");
    }
    // cạnh đáy
    for (int i = 1; i <= n; i++)
        printf("*");

    return 0;
}



