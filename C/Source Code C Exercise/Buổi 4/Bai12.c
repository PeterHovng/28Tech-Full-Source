#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("n = "); scanf("%d", &n);
    while (n != 0)
    {
        int dv = n % 10;
        if (dv == 0 || dv == 6 || dv == 8)
            count = 0;
        else
            count++;
        n /= 10;
    }
    if (count == 0)
        printf("1");
    else
        printf("0");
    return 0;
}
