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

int So_Dao (int n)
{
    int SoDao = 0;
    while (n != 0)
    {
        SoDao = SoDao * 10 + n % 10;
        n /= 10;
    }
    return SoDao;
}


int main ()
{
    int n;
    printf ("n = "); scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int SoDao = So_Dao(i);
        if(SNT(i) && SNT(SoDao) && i != SoDao)
            printf ("%d ", i);
    }
    return 0;
}
