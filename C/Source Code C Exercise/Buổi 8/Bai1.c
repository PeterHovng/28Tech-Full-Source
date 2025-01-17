#include <stdio.h>

int SNT (int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main ()
{
    // 2 <= n <= 10^5
    int n, count = 0;
    printf("n = "); scanf("%d", &n);
    if (SNT(n) && (n != 2))
        printf("1");
    else
    {
        for (int i = 1; i <= n - 1; i++)
        {
            if (n % i == 0)
                count++;
        }
        printf("%d", count);
    }

    return 0;
}
