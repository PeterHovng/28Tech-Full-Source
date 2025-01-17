#include <stdio.h>
#include <math.h>

int giai_thua (int num)
{
    int so = 1;
    for (int i = 1; i <= num; i++)
    {
        so *= i;
    }
    return so;
}

int main()
{
    // 1 ≤ m ≤ n ≤ 20
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    printf("\n");
    n = n - 1;
    m = m - 1;
    // phân phối có điều kiện (không hộp nào được rỗng)
    printf("%d", giai_thua(n) / (giai_thua(m) * giai_thua(n-m)));
    printf("\n");
    return 0;
}

