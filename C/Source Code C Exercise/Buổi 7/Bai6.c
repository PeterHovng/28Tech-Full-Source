// hình chữ nhật
#include <stdio.h>

int main ()
{
    int n;
    printf("n = "); scanf("%d", &n);
    int num = n;
    printf("\n");
    // line 1
    for(int i = 1; i <= n * 2 - 3; i++)
        printf("%d", n - 1);
    printf("\n");

    // nửa trên
    int trai = 1, phai = n - 2, left = n - 3, right = 1;
    for(int i = 1; i <= n - 3; i++)
    {
        // góc phần tư thứ II
        int a = n;
        for(int i = 1; i <= trai; i++)
        {
            --a;
            printf("%d", a);
        }
        trai++;
        --a;

        for(int i = 1; i <= phai; i++)
            printf("%d", a);
        phai--;

        // góc phần tư thứ I
        int b = num - 1;
        --b;
        for(int i = 1; i <= left; i++)
            printf("%d", b);
        left--;
        num--;

        for(int i = 1; i <= right; i++)
            printf("%d", ++b);
        right++;
        printf("\n");
    }
    // nửa dưới
    num = 2, trai = n - 2, phai = 1, left = 0, right = n - 2;
    int b = 1;
    for(int i = 1; i <= n - 2; i++)
    {
        // góc phần tư thứ III
        int a = n;
        for(int i = 1; i <= trai; i++)
        {
            --a;
            printf("%d", a);
        }
        trai--;
        --a;

        for(int i = 1; i <= phai; i++)
            printf("%d", a);
        phai++;

        // góc phần tư thứ IV
        for(int i = 1; i <= left; i++)
            printf("%d", b);
        b++;
        left++;

        int c = num;
        for(int i = 1; i <= right; i++)
        {
            printf("%d", c);
            c++;
        }
        right--;
        num++;

        printf("\n");
    }
    // line n
    for(int i = 1; i <= n * 2 - 3; i++)
        printf("%d", n - 1);
    printf("\n");
    return 0;
}
