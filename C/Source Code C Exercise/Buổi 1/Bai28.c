#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("nhap vao he so a: ");
    scanf("%f", &a);
    printf("nhap vao he so b: ");
    scanf("%f", &b);
    printf("nhap vao he so c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    // ax^2 + bx + c = 0 (1)
    if (a != 0) // điều kiện để có ptb2 là a khác 0
    {
        if (delta < 0) // Δ < 0 => phương trình (1) vô nghiệm
        {
            float phanThuc = -b / (2 * a);
            float phanAo = sqrt(-delta) / (2 * a);
            printf("\nPHUONG TRINH CO HAI NGHIEM PHUC\nx1 = %.2lf + %.2lfi\nx2 = %.2lf - %.2lfi\n", phanThuc, phanAo, phanThuc, phanAo);
        }
        else if (delta > 0) // Δ > 0 => phương trình (1) có 2 nghiệm phân biệt
        {

            if (a + b + c == 0) // nhẩm nghiệm
            {
                x2 = c / a;
                printf("\nPHUONG TRINH CO NGHIEM x1 = 1\n");
                printf("\nPHUONG TRINH CO NGHIEM x2 = %.2f", x2);
            }
            else if (a - b + c == 0) // nhẩm nghiệm
            {
                x2 = -c / a;
                printf("\nPHUONG TRINH CO NGHIEM x1 = -1\n");
                printf("\nPHUONG TRINH CO NGHIEM x2 = %.2f", x2);
            }
            else // Δ > 0 => phương trình (1) có 2 nghiệm phân biệt
            {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("\nPHUONG TRINH CO NGHIEM x1 = %.2f\n", x1);
                printf("\nPHUONG TRINH CO NGHIEM x2 = %.2f\n", x2);
            }
        }
        else // Δ = 0 => phương trình (1) có nghiệm kép
        {
            x1 = -b / 2 * a;
            printf("\nPHUONG TRINH CO NGHIEM KEP x1 = x2 = %.2f", x1);
        }
    }
    else
        printf("\na = 0 PHUONG TRINH TRO THANH PHUONG TRINH BAC NHAT");

    printf("\n");
    system("pause");
    return 0;
}
