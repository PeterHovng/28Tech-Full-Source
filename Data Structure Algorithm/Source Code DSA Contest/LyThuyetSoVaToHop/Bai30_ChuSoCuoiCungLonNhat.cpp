#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;
int t[maxn];
void sang()
{
    t[0] = t[1] = 1;
    for(int i= 2 ; i <= sqrt(maxn) ;i++)
    {
        if(t[i] == 0)
        {
            for(int j = i * i ; j <= maxn ; j += i)
            {
                t[j] = 1;
            }
        }
    }
}
bool check(int n)
{
    string s = to_string(n);
    char Max = *s.rbegin();
    for(int i = 0 ; i < s.size() - 1 ; i++)
    {
        if(Max < s[i]) return false;
    }
    return true;
}
int main()
{
    sang();
    int n ; cin >>n;
    int ans = 0;
    for(int i = 2 ;i <= n ;i++)
    {
        if(t[i] == 0 && check(i))
        {
            cout << i << " ";
            ++ans;
        }
    }
    cout << endl << ans;
}
