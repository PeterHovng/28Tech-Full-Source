#include <stdio.h>

int GCD (int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return GCD(b, a / b);
}

int NT (int n)
{
    if (n < 2)
        return 0;
    for(int i = 2; i * i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main ()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
            min = a[i];
        if(NT(a[i])) count++;
    }


    return 0;
}
