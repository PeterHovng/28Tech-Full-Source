#include <stdio.h>

int giai_thua (int num)
{
    int giaithua = 1;
    for (int i = 1; i <= num; i++)
        giaithua *= i;
    return giaithua;
}

int main ()
{
    int n, k = 0, pt;
    printf("n = "); scanf("%d", &n);
    for (int i = 0; i <= n - 1; i++)
    {
        k++;
        for(int j = 0; j <= k - 1; j++)
        {
            int z = i - j;
            pt = giai_thua(i) / (giai_thua(j) * giai_thua(z));
            printf("%d ", pt);
        }
        printf("\n");
    }
    return 0;
}
