#include <stdio.h>

int tich (int n)
{
    int t = 1;
    while(n != 0)
    {
        t *= (n % 10);
        n = n / 10;
    }
    return t;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf ("%d", tich(n));
    return 0;
}




