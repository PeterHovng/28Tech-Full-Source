#include <stdio.h>
#include <math.h>

int so_thuan_nghich(int n){
    int reverse = 0, original = n;
    while(n != 0)
    {
        reverse = reverse * 10 + n % 10; // 123 -> reverse = 0*10 + 3 -> 12 -> reverse = 3*10 + 2
        n /= 10;
    }
    if(original == reverse)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a, end = 0, count = 0;
    printf("a = "); scanf("%d", &a);
    for (int i = a - 1; i >= 0; i--)
    {
        end += 9 * pow(10, i);
    }
    int start = pow(10, a - 1);
    for (int i = start; i <= end; i++)
    {
        int tong = 0, num = i;
        while(num != 0)
        {
            tong += num % 10;
            num = num / 10;
        }
        if (tong % 10 == 0 && so_thuan_nghich(i))
            count++;
    }
    printf("\n%d\n", count);
    return 0;
}
