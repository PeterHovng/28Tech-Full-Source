#include <stdio.h>
#include <math.h>

int main()
{
    // 1 ≤ n <=100, 1 ≤ mi, ci ≤ 6
    unsigned short n, mi, ci, count_mi, count_ci;
    printf("n = ");
    scanf("%hu", &n);
    printf("\n");
    for (int j = 1; j <= n; j++)
    {
        printf("mi = ");
        scanf("%hu", &mi);
        printf("ci = ");
        scanf("%hu", &ci);
        printf("\n");
        if (mi > ci)
        {
            count_mi++;
        }
        else if (mi == ci)
        {
            continue;
        }
        else
        {
            count_ci++;
        }
    }
    if (count_mi > count_ci)
        {
            printf("Mishka");
        }
        else if (count_mi == count_ci)
        {
            printf("Friendship is magic! ^^");
        }
        else
        {
            printf("Chris");
        }
    printf("\n");
    return 0;
}

