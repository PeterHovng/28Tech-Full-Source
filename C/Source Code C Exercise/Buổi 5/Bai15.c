#include <stdio.h>
#include <stdbool.h>

int tong_chu_so(int num)
{
    int tong = 0;
    while (num != 0)
    {
        int dv = num % 10;
        tong += dv;
        num /= 10;
    }
    return tong;
}

int main ()
{
    int a, b;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    if (tong_chu_so(a) >= tong_chu_so(b))
        printf("%d %d", a, b);
    else
        printf("%d %d", b, a);
    return 0;
}

