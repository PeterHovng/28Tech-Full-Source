// Vẽ mũi tên sang phải
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int kcTren = 0, kcDuoi = n * 2 - 4, saoTren = n, saoDuoi = 2;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= kcTren; j++)
            printf(" ");
        for (int j = 1; j <= saoTren; j++)
            printf("*");
        printf("\n");
        kcTren += 2;
        saoTren -= 1;
    }

    for (int i = 1; i <= n * 2 - 2; i++)
        printf(" ");
    printf("*\n");

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= kcDuoi; j++)
            printf(" ");
        for (int j = 1; j <= saoDuoi; j++)
            printf("*");
        printf("\n");
        kcDuoi -= 2;
        saoDuoi += 1;
    }
    return 0;
}





