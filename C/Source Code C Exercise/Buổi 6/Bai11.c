#include <stdio.h>

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int phai = n, trai = 0;
    int thuan, nghich = 1;
    for (int i = 1; i <= n; i++)
    {
        // vế trái
        int a = nghich;
        for (int j = 1; j <= trai; j++)
        {
            printf("%d", nghich);
            nghich--;
        }
        nghich = a + 1;
        trai++;

        // vế phải
        thuan = 1;
        for (int j = 1; j <= phai; j++)
        {
            printf("%d", thuan);
            thuan++;
        }
        phai--;

        printf("\n");
    }
    return 0;
}

