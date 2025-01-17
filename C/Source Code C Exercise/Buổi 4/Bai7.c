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

bool dem_uoc_SNT (int n)
{
    int count = 0;
    // dem so uoc la so nguyen to
    if (n % 2 == 0)
        count++;
    for(int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) // dem so uoc snt
            count++;
        while(n % i == 0)
        {
            n = n / i;
        }
    }
    if (n > 2)
        count++;

    if (count >= 3)
        return true;
    else
        return false;
}

int main ()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    for (int j = a; j <= b; j++)
    {
        if (so_thuan_nghich(j) && dem_uoc_SNT(j))
            printf ("\n%d", j);
    }
    printf("\n");
    return 0;
}
