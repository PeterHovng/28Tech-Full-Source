#include <stdio.h>

int tong_SoChan (int n)
{
    int chan = 0;
    while(n != 0)
    {
        if ((n % 10) % 2 == 0)
            chan += (n % 10);
        n = n / 10;
    }
    return chan;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf ("%d", tong_SoChan(n));
    return 0;
}


