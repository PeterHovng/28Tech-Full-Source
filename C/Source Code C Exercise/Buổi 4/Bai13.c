#include "stdio.h"
#include <stdbool.h>

int so_thuan_nghich(int n){
    int reverse = 0, original = n;
    while(n != 0)
    {
        reverse = reverse * 10 + n % 10; // 123 -> reverse = 0*10 + 3 -> 12 -> reverse = 3*10 + 2
        n /= 10;
    }
    if(original == reverse)
    {
        return 1;
    }
    return 0;
}

int main ()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    for(int i = a; i <= b; i++)
    {
        int num = i, count6 = 0, tong = 0;
        while (num != 0)
        {
            int dv = num % 10;
            if (dv == 6)
                count6++;
            tong += dv;
            num /= 10;
        }
        if (so_thuan_nghich(i) && count6 != 0 && tong % 10 == 8)
            printf("\n%d", i);
    }

    printf("\n");
    return 0;
}

