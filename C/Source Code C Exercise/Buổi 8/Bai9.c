#include <stdio.h>

int GiaiThua (int num)
{
    int x = 1;
    for(int i = 1; i <= num; i++)
        x *= i;
    return x;
}

int main ()
{
    int Y, W, max, C;
    scanf("%d%d", &Y, &W);
    max = Y;
    if (W >= max)
        max = W;
    int k = 6 - max + 1;
    C = GiaiThua(k) / (GiaiThua(1)*GiaiThua(k - 1));
    switch(C)
    {
        case 0:
            printf("0/1");
            break;
        case 1:
            printf("1/6");
            break;
        case 2:
            printf("1/3");
            break;
        case 3:
            printf("1/2");
            break;
        case 4:
            printf("2/3");
            break;
        case 5:
            printf("5/6");
            break;
        case 6:
            printf("1/1");
            break;
    }
    return 0;
}







