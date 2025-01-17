#include <stdio.h>

int main()
{
    char c;
    printf("c = ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("\n%c", c + 32);
    else
        printf("\n%c", c);
    printf("\n");
    return 0;
}
