#include <stdio.h>

int main ()
{
    // 0 ≤ a1, a2, a3 ≤ 100 cup 5
    // 0 ≤ b1, b2, b3 ≤ 100 hc 10
    unsigned short a1, a2, a3, b1, b2, b3, n, cup, medal, sum;
    scanf("%hu%hu%hu", &a1, &a2, &a3);
    scanf("%hu%hu%hu", &b1, &b2, &b3);
    scanf("%hu", &n);
    cup = (a1 + a2 + a3) / 5;
    medal = (b1 + b2 + b3) / 10;
    sum = cup + medal;
    if((a1 + a2 + a3) % 5 != 0)
        sum++;
    if((b1 + b2 + b3) % 10 != 0)
        sum++;
    if(sum > n)
        printf("NO");
    else
        printf("YES");
    return 0;
}




