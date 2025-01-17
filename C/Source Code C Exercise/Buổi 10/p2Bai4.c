#include <stdio.h>

int tong_SoLe (int n)
{
    int le = 0;
    while(n != 0)
    {
        if ((n % 10) % 2 != 0)
            le += (n % 10);
        n = n / 10;
    }
    return le;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf ("%d", tong_SoLe(n));
    return 0;
}



