#include <stdio.h>

int giai_thua (int num)
{
    int number = 1;
    for (int i = 1; i <= num; i++)
    {
        number *= i;
    }
    return number;
}

int main()
{
    int a, b, count = 0;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        int num = i, tong_giai_thua = 0;
        while (num != 0)
        {
            int dv = num % 10;
            tong_giai_thua += giai_thua(dv);
            num /= 10;
        }
        if (i == tong_giai_thua)
        {
            count++;
            printf("\n%d", i);
        }
    }
    if (count == 0)
        printf("\n0");
    printf("\n");
    return 0;
}
