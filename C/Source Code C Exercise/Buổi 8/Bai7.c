#include <stdio.h>

int GiaiThua (int num)
{
    int x = 1;
    for(int i = 1; i <= num; i++)
        x *= i;
    return x;
}

int main ()
{
    // 1 <= A, B <= 10^9
    unsigned int GTA, GTB, r;
    scanf("%u%u", &GTA, &GTB);
    GTA = GiaiThua(GTA);
    GTB = GiaiThua(GTB);
    while(1)
    {
        r = GTA % GTB;
        if (r == 0)
        {
            printf("%u", GTB);
            break;
        }
        GTA = GTB;
        GTB = r;
    }

    return 0;
}





