#include <stdio.h>

int main()
{
    int n, chan = 0, le = 0;
    printf("n = "); scanf("%d", &n);
    while(n != 0)
    {
        int dv = n % 10;
        if (dv % 2 == 0)
            chan++;
        else
            le++;
        n /= 10;
    }
    printf("\nchan = %d\nle = %d\n", chan, le);
    return 0;
}
