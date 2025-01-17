#include <stdio.h>
#include <stdbool.h>

int Fibonaci(int num)
{
    if (num == 0)
        return true;
    int Fn, F1 = 0, F2 = 1;
    for (int i = 1; i <= num; i++)
    {
        Fn = F1 + F2;
        F1 = F2;
        F2 = Fn;
        if (num == Fn)
            return true;
    }
    return false;
}

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    if (Fibonaci(n))
        printf("1");
    else
        printf("0");
    return 0;
}
