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
    // n đứa trẻ và m quả táo, 1 ≤ m ≤ n ≤ 20
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    printf("\n");
    // phân phối không có điều kiện (có thể có hộp rỗng)
    printf("%d", giai_thua(n + m - 1) / (giai_thua(m - 1) * giai_thua((n + m - 1) - (m - 1))));
    printf("\n");
    return 0;
}


