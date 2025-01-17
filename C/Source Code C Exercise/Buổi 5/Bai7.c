#include <stdio.h>
#include <math.h>

int main ()
{
    int n, dau, cuoi, so = 0, count = 0;
    printf("n = "); scanf("%d", &n);
    cuoi = n % 10; // cuoi = 4
    int num = n; // num = 1234
    while(num != 0)
    {
        count++; // số chữ số
        if (num >= 1 && num <= 9)
        {
            dau = num; // dau = 1
            break;
        }
        num /= 10;
    }
    so = cuoi; // so = 4

    n = n / 10; // n = 123
    int giua = n - dau * pow(10, count - 2); // giua = 23
    so = so * pow(10, count - 2) + giua; // so = 423
    so = so * 10 + dau; // so = 4231
    printf("\n%d", so);
    return 0;
}
