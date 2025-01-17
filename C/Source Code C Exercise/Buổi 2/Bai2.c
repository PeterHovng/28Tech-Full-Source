#include <stdio.h>

int main()
{
    // 1 <= M <= N <= 16
    short M, N;
    printf("M = ");
    scanf("%hi", &M);
    printf("N = ");
    scanf("%hi", &N);
    if ((M * N) % 2 == 0)
        printf("%d", (M * N) / 2);
    else
        printf("%d", (M * N - 1) / 2);
    return 0;
}
