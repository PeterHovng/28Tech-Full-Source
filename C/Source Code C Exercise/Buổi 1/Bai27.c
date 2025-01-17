#include <stdio.h>

int main()
{
    short n, sonam, sothang, songay;
    printf("ngay = ");
    scanf("%hi", &n);
    sonam = n / 365;
    sothang = (n % 365) / 30;
    songay = n - (sonam * 365) - (sothang * 30);
    printf("\nso nam = %hi", sonam);
    printf("\nso thang = %hi", sothang);
    printf("\nso ngay = %hi", songay);
    printf("\n");
    return 0;
}
