#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 1;
int t[maxn];
void sang()
{
    for(int i = 1 ; i <= 1e5 ; i++)
    {
        t[i] = i;
    }
    for(int i = 2 ;i <= sqrt(maxn) ; i++)
    {
        if(t[i] == i)
        {
            for(int j = i * i ; j <= maxn ; j += i)
            {
                if(t[j] == j)
                {
                    t[j] = i;
                }
            }
        }
    }
}
int main()
{
    int n ; cin >> n;
    sang();
    for(int i = 1 ;i <= n ;i++)
    {
        cout << t[i] << endl;
    }
}