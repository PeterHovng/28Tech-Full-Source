// hình chữ nhật
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    // line 1
    for(int i = 1; i <= n; i++)
        printf("%d ", n);
    printf("\n");

    for(int i = 1; i <= n - 1; i++)
    {
        int num = n;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num--;
        }
        for(int j = 1; j <= num; j++)
            printf("%d ", num);
        printf("\n");
    }
    return 0;
}





