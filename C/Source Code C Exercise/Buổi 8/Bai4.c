#include <stdio.h>

int main ()
{
    // 0 ≤ c1, c2 , c3, c4, c5 <=100
    int c1, c2, c3, c4, c5;
    scanf("%d%d%d%d%d", &c1, &c2, &c3, &c4, &c5);
    int b = (c1 + c2 + c3 + c4 + c5) / 5;
    if ((c1 + c2 + c3 + c4 + c5) % 5 == 0 && b != 0)
        printf("%d", b);
    else
        printf("-1");
    return 0;
}


