// hình chữ nhật
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);

    int num = n, a = 1, count = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = a; j <= n; j++)
            printf("%d ", j);
        a++;

        for(int j = 1; j <= count; j++)
            printf("%d ", n);
        count++;

        printf("\n");
    }
    return 0;
}







