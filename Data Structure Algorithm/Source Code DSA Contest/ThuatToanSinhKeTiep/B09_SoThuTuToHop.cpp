#include <bits/stdc++.h>
using namespace std;

int a[1001] , n, k, ok;

void ktao()
{
    for(int i = 1; i <= k ; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    cin >> n >> k;
    int x[n + 4];
    string s = "";
    for(int i = 1 ; i <= k ; i++)
    {
        cin >> x[i];
        s += to_string(x[i]);
    }
    ktao();
    ok = 1;
    vector<string>v;
    while(ok)
    {
        string res = "";
        for(int i = 1 ; i <= k ; i++)
        {
            res += to_string(a[i]);
        }
        v.push_back(res);
        sinh();
    }
    reverse(v.begin() , v.end());
    int cnt = 0;
    for(string x : v)
    {
        ++cnt;
        if(s == x)
        {
            cout << cnt ;
            return 0;
        }
    }
    return 0;
}
