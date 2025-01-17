#include "stdio.h"

int main ()
{
    // 2 <= n <= 92
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("\n0");
    long long Fn1 = 0, Fn2 = 1, Fn;
    for(int i = 1; i <= n - 1; i++)
    {
      Fn = Fn1 + Fn2;
      printf("\n%lld", Fn);
      Fn2 = Fn1;
      Fn1 = Fn;
    }
    printf("\n");
    return 0;
}

