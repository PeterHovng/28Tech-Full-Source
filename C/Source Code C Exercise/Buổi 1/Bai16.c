#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    if (n > 0)
    {
        if (n % 4 == 0 && n % 100 != 0)
            printf("\nYES");
        else
            printf("\nNO");
    }
    else
        printf("\nINVALID");
    printf("\n");
    return 0;
}
