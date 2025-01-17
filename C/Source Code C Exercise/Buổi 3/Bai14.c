#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long n, dv = 0, chan = 0, le = 0;
    printf("n = ");
    scanf("%llu", &n);
    do
    {
        dv = n % 10;
        if (dv % 2 == 0)
            chan += dv;
        else
            le += dv;
        n = n / 10;
    }while(n > 0);
    printf("%llu\n%llu", chan, le);
    return 0;
}

