#include <stdio.h>

void reverseNumber(int n)
{
    if (n < 10)
    {
        printf("%d", n);
        return;
    }
    else
    {
        printf("%d", n % 10);
        reverseNumber(n / 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    reverseNumber(n);
    return 0;
}
