#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long n, dv = 0, countchan = 0, countle = 0;
    printf("n = ");
    scanf("%llu", &n);
    do
    {
        dv = n % 10;
        if (dv % 2 == 0)
            countchan++;
        else
            countle++;
        n = n / 10;
    }while(n > 0);
    if(countchan == countle)
        printf("\nYES");
    else
        printf("\nNO");
    printf("\n");
    return 0;
}


