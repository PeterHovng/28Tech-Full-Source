#include <stdio.h>

int main()
{
    int n, a[100], count, x, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count > max)
        {
            max = count;
            x = a[i];
        }
    }
    printf("%d %d", x, max);
    return 0;
}















