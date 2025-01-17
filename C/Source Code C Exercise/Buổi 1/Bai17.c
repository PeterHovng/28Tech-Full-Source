#include <stdio.h>

int main()
{
    int t, n;
    printf("t = ");
    scanf("%d", &t);
    printf("n = ");
    scanf("%d", &n);
    if (t, n > 0 && t >= 1 && t <= 12)
    {
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
            printf("\nthang %d nam %d co 31 ngay", t, n);
        else if (t == 2)
        {
            if (n % 4 == 0 && n % 100 != 0)
                printf("\nthang %d nam %d co 29 ngay", t, n);
            else
                printf("\nthang %d nam %d co 28 ngay", t, n);
        }
        else
            printf("\nthang %d nam %d co 30 ngay", t, n);
    }
    else
        printf("\nINVALID");
    printf("\n");
    return 0;
}
