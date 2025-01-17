#include <stdio.h>

int main()
{
    float a, b, c, d, dtk;
    printf("Diem he so 1\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("Diem he so 2\n");
    printf("c = ");
    scanf("%f", &c);
    printf("Diem he so 3\n");
    printf("d = ");
    scanf("%f", &d);

    dtk = ((a + b) + 2 * c + 3 * d) / (2 + 5);

    printf("\n");
    if (dtk < 5)
        printf("YEU");
    else if (dtk < 6.5)
        printf("TRUNG BINH");
    else if (dtk < 8)
        printf("KHA");
    else if (dtk <= 10)
        printf("GIOI");
    printf("\n");
    return 0;
}
