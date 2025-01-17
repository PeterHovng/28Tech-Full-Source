// Hình tam giác
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int giua = 0, kc = n - 1;
    for(int i = 1; i <= n; i++)
    {
        giua += 2;
        int trai = 2, phai = giua;
        for(int j = 1; j <= kc; j++)
            printf(" ");
        kc--;

        for(int j = 2; j <= i; j++)
        {
            printf("%d", trai);
            trai += 2;
        }
        printf("%d", giua);
        for(int j = 2; j <= i; j++)
        {
            phai -= 2;
            printf("%d", phai);
        }
        printf("\n");
    }
    return 0;
}


