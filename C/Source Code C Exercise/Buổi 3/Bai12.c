#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long n, count = 0;
    printf("n = ");
    scanf("%llu", &n);
    do
    {
        n = n / 10;
        count++;
    } while (n > 0);
    printf("%llu", count);
    return 0;
}
