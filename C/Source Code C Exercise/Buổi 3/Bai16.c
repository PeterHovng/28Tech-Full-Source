#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// kiem tra so nguyen to
bool nguyento(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    unsigned long long n, dv = 0, count = 0;
    printf("n = ");
    scanf("%llu", &n);
    do
    {
        dv = n % 10;
        if (nguyento(dv))
            count++;
        n = n / 10;
    }while(n > 0);
    printf("%llu", count);
    return 0;
}
