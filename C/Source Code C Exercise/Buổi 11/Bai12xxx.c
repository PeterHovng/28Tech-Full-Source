#include <stdio.h>

int main()
{
    int n, a[100], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] == 50)
            {
                if (a[i] - a[j] == 25)
                {
                    a[j] = 0;
                    count = 1;
                    break;
                }
                else count = 0;
            }
            if (a[i] == 100)
            {
                if (a[i] - a[j] == 50)
                {
                    for (int k = j - 1; k >= 0; k--)
                        if (a[i] - a[j] - a[k] == 25)
                        {
                            a[j] = 0;
                            a[k] = 0;
                            count = 1;
                            break;
                        }
                        else count = 0;
                }
                else if (a[i] - a[j] == 75)
                {
                    for (int k = j - 1; k >= 0; k--)
                        if (a[i] - a[j] - a[k] == 25)
                        {
                            a[j] = 0;
                            a[k] = 0;
                            count = 1;
                            break;
                        }
                        else if (a[i] - a[j] - a[k] == 50)
                        {
                            for (int l = k - 1; l >= 0; l--)
                            {
                                if (a[i] - a[j] - a[k] - a[l] == 25)
                                {
                                    a[j] = 0;
                                    a[k] = 0;
                                    a[l] = 0;
                                    count = 1;
                                    break;
                                }
                                else count = 0;
                            }
                        }
                        else count = 0;
                }
            }
        }
    }
    if (count == 1) printf("YES");
    else printf("NO");
    return 0;
}













