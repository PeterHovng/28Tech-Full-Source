// Vẽ mũi tên sang trái
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int kcTren = n - 1, kcDuoi = 0, saoTren = n, saoDuoi = 2;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= kcTren; j++)
            printf(" ");
        for (int j = 1; j <= saoTren; j++)
            printf("*");
        printf("\n");
        kcTren -= 1;
        saoTren -= 1;
    }

    printf("*\n");

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= kcDuoi; j++)
            printf(" ");
        for (int j = 1; j <= saoDuoi; j++)
            printf("*");
        printf("\n");
        kcDuoi += 1;
        saoDuoi += 1;
    }
    return 0;
}
