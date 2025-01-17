#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    printf("\n");
    while (n % 2 == 0) // SNT chẵn duy nhất
    {
        printf ("2 ");
        n /= 2;
    }
    // chia dần cho các SNT là số lẻ
    for (int i = 3; i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    // nếu số này còn lớn hơn 2 thì số này chính là SNT
    if (n > 2)
        printf("%d", n);
    printf("\n");
    return 0;
}
