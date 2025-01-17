// hình chữ nhật
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int count = n - 1, a = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= count; j++)
            printf("~");

        for(int j = 1; j <= a; j++)
            printf("%d", a);

        printf("\n");
        a++;
        count--;
    }
    return 0;
}



