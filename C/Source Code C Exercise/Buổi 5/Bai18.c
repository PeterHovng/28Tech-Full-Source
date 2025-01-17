#include <stdio.h>

int main ()
{
    int n;
    printf ("n = "); scanf("%d", &n);
    int count2 = 0, count3 = 0, count5 = 0, count7 = 0;
    while (n != 0)
    {
        int dv = n % 10;
        if (dv == 2)
            count2++;
        else if (dv == 3)
            count3++;
        else if (dv == 5)
            count5++;
        else if (dv == 7)
            count7++;
        n /= 10;
    }
    if (count2 > 0)
        printf("2 %d\n", count2);
    if (count3 > 0)
        printf("3 %d\n", count3);
    if (count5 > 0)
        printf("5 %d\n", count5);
    if (count7 > 0)
        printf("7 %d\n", count7);
    return 0;
}
