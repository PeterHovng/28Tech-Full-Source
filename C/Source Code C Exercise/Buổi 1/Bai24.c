#include <stdio.h>

int main()
{
    char c;
    printf("c = ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("\n%c", c + 33);
    else if (c >= 'a' && c <= 'z')
        printf("\n%c", c + 1);
    else
        printf("\nINVALID");
    printf("\n");
    return 0;
}
