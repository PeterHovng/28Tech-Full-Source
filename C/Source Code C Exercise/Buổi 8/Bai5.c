#include <stdio.h>

int main ()
{
    // 0 ≤ k2, k3, k5, k6 ≤ 5.10^6
    long long k2, k3, k5, k6, num = 0;
    scanf("%lld%lld%lld%lld", &k2, &k3, &k5, &k6);
    // 32 and 256
    int n = k2;
    int min = k2;
    if (k5 <= min)
        min = k5;
    if (k6 <= min)
        min = k6;
    for(int i = 1; i <= min; i++)
    {
        num += 256;
        k2--;
    }
    min = k2;
    if (k3 <= min)
        min = k3;
    for(int i = 1; i <= min; i++)
    {
        k2--;
        num += 32;
    }
    printf("%lld", num);

    return 0;
}



