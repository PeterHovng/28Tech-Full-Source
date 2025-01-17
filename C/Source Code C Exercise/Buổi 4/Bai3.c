#include <stdio.h>
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

bool So_tang_dan (int num)
{
    int count = 0, max = 10e10;
    while (num != 0)
    {
        int dv = num % 10;
        if (dv <= max)
            max = dv;
        else
            count++;
        num /= 10;
    }
    if (count == 0)
        return true;
    return false;
}

bool So_giam_dan (int num)
{
    int count = 0, min = 0;
    while (num != 0)
    {
        int dv = num % 10;
        if (dv >= min)
            min = dv;
        else
            count++;
        num /= 10;
    }
    if (count == 0)
        return true;
    return false;
}

int main ()
{
    int a, end = 0, count = 0;
    printf("a = "); scanf("%d", &a);

    for (int i = a - 1; i >= 0; i--)
    {
        end += 9 * pow(10, i);
    }
    int start = pow(10, a - 1);
    for (int i = start + 1; i <= end; i++)
    {
        if (SoNguyenTo(i) && (So_tang_dan(i) || So_giam_dan(i)))
            count++;
    }
    printf("%d", count);
    return 0;
}
