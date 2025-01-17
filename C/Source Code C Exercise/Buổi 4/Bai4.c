#include "stdio.h"
#include <stdbool.h>
#include <math.h>

bool SoNguyenTo (int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int Fibonaci(int n, int a, int b)
{
   if(n == 0 || n == 1)
   {
      return 1;
   }
   int Fn1 = 0, Fn2 = 1, Fn;
   for(int i = a; i <= b; i++)
   {
      Fn = Fn1 + Fn2;
      if(Fn == n)
      {
         return 1;
      }
      Fn2 = Fn1;
      Fn1 = Fn;
   }
   return 0;
}

int SoChuSo (int num)
{
    int count = 0;
    for (int i = 0; i <= num; i++)
    {
        count++;
        num = num / 10;
        if (num == 0)
            break;
    }
    return count;
}

int tong_cac_chu_so(int num)
{
    int tong = 0, dv;
    for (int i = 0; i <= SoChuSo(num); i++)
    {
        dv = num % 10;
        num = num / 10;
        tong += dv;
    }
    return tong;
}

int main ()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    for(int i = a; i <= b; i++)
    {
        if (SoNguyenTo(i) && Fibonaci(tong_cac_chu_so(i), a, b))
            printf("\n%d", i);
    }
    printf("\n");
    return 0;
}

