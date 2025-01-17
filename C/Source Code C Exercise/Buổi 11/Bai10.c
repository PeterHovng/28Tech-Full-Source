#include <stdio.h>

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int M = 10e10;
    for (int i = 0; i < n; i++)
        if (a[i] < M) M = a[i];

    int NN = M;
    M = 10e10;
    for (int i = 0; i < n; i++)
        if (a[i] < M && a[i] > NN) M = a[i];

    for(int i = n - 1; i >= 0; i--)
        if (a[i] == NN) printf("%d ", i + 1);
    for(int i = n - 1; i >= 0; i--)
        if (a[i] == M) printf("%d ", i + 1);

    return 0;
}











