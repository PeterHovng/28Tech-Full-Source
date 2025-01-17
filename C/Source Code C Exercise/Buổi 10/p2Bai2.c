#include <stdio.h>

int main()
{
    int n, count = 1;
    scanf("%d", &n);
    while(n != 0)
    {
        if ((n % 10) % 2 != 0)
            count = 0;
        n = n / 10;
    }
    if (count == 1)
        printf("1");
    else
        printf("0");
    return 0;
}

