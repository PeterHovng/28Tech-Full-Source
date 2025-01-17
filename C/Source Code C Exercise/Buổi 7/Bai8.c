// hình chữ nhật
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int count = 1;
    int num = n;
    for(int i = 1; i <= n; i++)
    {
        int a = count;
        for(int j = 2; j <= count; j++)
        {
            printf("%d ", a);
            a--;
        }
        count++;

        for(int j = 1; j <= num; j++)
            printf("%d ", j);
        num--;

        printf("\n");
    }
    return 0;
}






