#include <stdio.h>

int first_number(int n)
{
    if (n < 10)
        return n;
    else
        return first_number(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", first_number(n));
    return 0;
}


