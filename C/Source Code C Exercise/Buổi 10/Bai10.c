#include <stdio.h>
#include <math.h>

float sum(float n)
{
    if (n == 1)
        return 1;
    else
        return 1/n + sum(n - 1);
}

int main()
{
    float n;
    scanf("%f", &n);
    printf("%.2f", sum(n));
    return 0;
}




