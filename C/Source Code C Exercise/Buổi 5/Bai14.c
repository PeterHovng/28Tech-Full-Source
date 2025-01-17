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

bool max_end (int num)
{
    int max = 1, SoCuoiCung = num % 10;
    while (num != 0)
    {
        int dv = num % 10;
        if (dv >= max)
            max = dv;
        num /= 10;
    }
    if(SoCuoiCung >= max)
        return true;
    return false;
}

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    for(int i = 2; i <= n; i++)
    {
        if (SNT(i) && max_end(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
