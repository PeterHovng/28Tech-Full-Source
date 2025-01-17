#include <stdio.h>

int main()
{
    int n, a[100], count = 0, l = 0, r = 3, i;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        for (i = l; i < r; i++)
            scanf("%d", &a[i]);
        if(a[i - 1] + a[i - 2] + a[i - 3] >= 2) ++count;
        l += 3;
        r += 3;
    }
    printf("%d", count);
    // P V T
    return 0;
}














