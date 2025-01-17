#include <stdio.h>

int main()
{
    char c;
    printf("c = ");
    scanf("%c", &c);
    if (c >= 48 && c <= 57)
        printf("\nYES");
    else
        printf("\nNO");
    printf("\n");
    return 0;
}
