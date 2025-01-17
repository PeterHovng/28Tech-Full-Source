#include <stdio.h>

int main()
{
    int n, S = 0;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        S += i;
    }
    printf("\n%d\n", S);
    return 0;
}
