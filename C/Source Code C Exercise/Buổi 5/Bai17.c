#include <stdio.h>
#include <stdbool.h>

bool SNT (int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main ()
{
    int n;
    printf ("n = "); scanf("%d", &n);
    while(n % 2 == 0)
    {
        printf("2 ");
        n /= 2;
    }
    for (int i = 3; i <= n; i = i + 2)
    {
        while (n % i == 0 && SNT(i))
        {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2)
        printf("%d ", n);
    return 0;
}

