// Vẽ hình thoi
#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int kcTren = n - 1, kcDuoi = 1, saoTren = 1, saoDuoi = n * 2 - 3;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= kcTren; j++)
            printf(" ");
        for (int j = 1; j <= saoTren; j++)
            printf("*");
        printf("\n");
        kcTren--;
        saoTren += 2;
    }

    for (int i = 1; i <= n * 2 - 1; i++)
        printf("*");
    printf("\n");

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= kcDuoi; j++)
            printf(" ");
        for (int j = 1; j <= saoDuoi; j++)
            printf("*");
        printf("\n");
        kcDuoi++;
        saoDuoi -= 2;
    }
    return 0;
}




