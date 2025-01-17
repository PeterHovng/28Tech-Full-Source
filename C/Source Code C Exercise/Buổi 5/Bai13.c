#include <stdio.h>
#include <stdbool.h>

bool So_thuan_nghich (int n)
{
    int SoDao = 0, SoGoc = n;
    while (n != 0)
    {
        SoDao = SoDao * 10 + n % 10;
        n /= 10;
    }
    if (SoDao == SoGoc)
        return true;
    return false;
}

bool no_9 (int n)
{
    while (n != 0)
    {
        int dv = n % 10;
        n /= 10;
        if (dv == 9)
            return false;
    }
    return true;
}

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if(So_thuan_nghich(i) && no_9(i))
            printf("%d ", i);
    }
    return 0;
}
