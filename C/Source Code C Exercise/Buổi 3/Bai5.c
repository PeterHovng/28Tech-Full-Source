#include <stdio.h>

int main()
{
    float n, S = 0;
    printf("n = ");
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {
        S += 1.0/(2*i);
    }
    printf("\n%.2f\n", S);
    return 0;
}


