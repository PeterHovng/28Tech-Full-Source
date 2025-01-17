#include <stdio.h>
#include <math.h>

int main()
{
    int n, S = 0;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        S += pow(i, 3);
    }
    printf("\n%d\n", S);
    return 0;
}



