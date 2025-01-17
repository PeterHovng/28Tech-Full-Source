#include <stdio.h>
#include <math.h>

int main()
{
    //  1 ≤ n ≤ 10000, bàn cờ vua cỡ k × k với k = 1, 2, 3, ... n
    unsigned int n;
    printf("n = ");
    scanf("%u", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%u\n", (i*i*(i*i-1))/2 - 2*2*(i-2)*(i-1));
        // (i*i*(i*i-1))/2 chọn ra 2 vị trí trong n vị trí
        // 2*2*(i-2)*(i-1)) số cách chúng ăn nhau trong hộp k
    }
    printf("\n");
    return 0;
}


