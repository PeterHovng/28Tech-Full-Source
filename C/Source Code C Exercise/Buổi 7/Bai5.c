// hình chữ nhật
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int count = 1;
    for(int i = 1; i <= n; i++)
    {
        int a = count, b = n - 1;
        for(int j = 1; j <= count; j++)
        {
            printf("%d ", a);
            a += b;
            b--;
        }
        printf("\n");
        count++;
    }
    return 0;
}




