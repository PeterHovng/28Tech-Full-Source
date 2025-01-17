#include <stdio.h>

int main ()
{
    // 0 ≤ hh < 24
    // 0 ≤ mm < 60
    // 1 ≤ t ≤ 1439
    unsigned short t, h, m , a[100], i = 0;
    scanf("%hu", &t);
    while(t > 0)
    {
        scanf("%hu", &h);
        scanf("%hu", &m);
        a[i] = 1440 - (h * 60 + m);
        i++;
        t--;
    }
    for (int j = 0; j < i; j++)
        printf("\n%hu", a[j]);

    return 0;
}






