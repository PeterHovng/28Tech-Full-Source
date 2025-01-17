#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int num = n;
    while (n != 0)
    {
        n /= 10;
        while (n >= 1 && n <= 9)
        {
            printf("%d ", n);
            break;
        }
    }
    printf("%d", num % 10);
    return 0;
}
