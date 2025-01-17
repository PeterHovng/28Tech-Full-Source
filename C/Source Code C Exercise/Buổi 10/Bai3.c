#include <stdio.h>

// int  fibonaci (int F1,int F2, int n)
int  fibonaci (int n)
{
    // my solution
//    int Fn = F1 + F2;
//    F1 = F2;
//    F2 = Fn;
//    if (n == 1 || n == 2)
//        return 1;
//    while (n > 3)
//    {
//        return fibonaci(F1, F2, n - 1);
//    }
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d",  fibonaci(1, 1, n));
    printf("%d",  fibonaci(n));
    return 0;
}

