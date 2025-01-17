#include <stdio.h>

int abs(int x)
{
    return (x > 0 ? x : -x);
}

int main()
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
        printf("-1");
    else if (x1 == x2)
        printf("%d %d %d %d", x1 + abs(y1 - y2), y1, x2 + abs(y1 - y2), y2);
    else if (y1 == y2)
        printf("%d %d %d %d", x1, y1 + abs(x1 - x2), x2, y2 + abs(x1 - x2));
    else
        printf("%d %d %d %d", x1, y2, x2, y1);
    return 0;
}
