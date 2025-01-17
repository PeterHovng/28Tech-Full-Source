#include <stdio.h>
#include <stdbool.h>

bool SNT (int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main ()
{
    int a, b;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    for(int i = a; i <= b; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            if (SNT(j))
            {
                if(i % j == 0 && i % (j * j) == 0)
                    printf("%d ", i);
            }
        }
    }
    return 0;
}

