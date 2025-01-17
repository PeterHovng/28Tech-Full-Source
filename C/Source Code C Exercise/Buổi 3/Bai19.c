#include <stdio.h>
#include <math.h>

int main()
{
    // 1 <= n <= 100, 2 ≤ t <=10
    unsigned long long n, t, tong = 0, count = 0;
    printf("n = ");
    scanf("%llu", &n);
    printf("t = ");
    scanf("%llu", &t);
    printf("\n");
    n = pow(10, n - 1);
    if (t >= 2 && t <= 9)
    {
        for (int i = 1; i <= 100; i++)
        {
            count++;
            n = n / 10;
            if (n == 0)
                break;
        }
        printf("%.0lf", t * pow(10, count - 1));
    }
    else if (t == 10)
    {
        for (int i = 1; i <= 100; i++)
        {
            count++;
            n = n / 10;
            if (n == 0)
                break;
        }
        printf("%.0lf", t * pow(10, count - 2));
    }
    else
        printf("Loi");
    printf("\n");
    return 0;
}
