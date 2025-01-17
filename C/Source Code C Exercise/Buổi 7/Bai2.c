// hình chữ nhật
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int num = n, a = 1;;
    for(int i = 1; i <= n; i++)
    {
        for(int j = a; j <= num; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        a++;
        num++;
    }
    return 0;
}

