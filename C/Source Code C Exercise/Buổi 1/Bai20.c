#include <stdio.h>

int main()
{
    char c;
    printf("c = ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("\nYES");
    else if (c >= 'a' && c <= 'z')
        printf("\nYES");
    else
        printf("\nNO");
    printf("\n");
    return 0;
}
