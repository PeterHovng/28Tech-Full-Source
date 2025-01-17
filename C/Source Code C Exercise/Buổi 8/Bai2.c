#include <stdio.h>

int main ()
{
    // 1 ≤ t ≤ 10^4
    int n, t, a, b, c, A, B, C;

    printf("t = "); scanf("%d", &t);
    while (t >= 1)
    {
        scanf("%d%d%d%d", &a, &b, &c, &n);
        A = (n - (c - b) - 2 * (a - c)) / 3;
        B = A - b + a;
        C = A - c + a;
        if ((a + A == b + B) && (b + B == c + C) && (a + A == c + C) && (A >= 0 && B >= 0 && C >= 0))
            printf("YES\n");
        else
            printf("NO\n");
        t--;
    }

    return 0;
}
//a + A = b + B = c + C
//A + B + C = n
//
//A - B = b - a
//B - C = c - b
//A - C = c - a -> C = A + (a - c)
//
//A + (c - b) + C + C = n
//A + (c - b) + 2 * (A + (a - c)) = n
//A = (n - (c - b) - 2 * (a - c)) / 3
//
//B = A - b + a
//C = A - c + a

