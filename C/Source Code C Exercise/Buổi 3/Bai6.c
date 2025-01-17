#include <stdio.h>
#include <math.h>

int main()
{
    int n, S = 0;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        S += pow(-1, i)*i;
    }
    printf("\n%d\n", S);
    return 0;
}

