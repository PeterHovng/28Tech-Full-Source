#include <bits/stdc++.h>
using namespace std;

int a[1001] , n, cnt , ok;

void ktao()
{
    cnt = 1;
    a[1] = n;
}
void sinh()
{
    int i = cnt;
    while(i >= 1 && a[i] == 1)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]--;
        int tong = cnt - i + 1;
        int x = tong / a[i];
        int y = tong % a[i];
        cnt = i;
        while(x--)
        {
            a[cnt + 1] = a[i];
            ++cnt;
        }
        if(y)
        {
            a[cnt + 1] = y;
            ++cnt;
        }
    }
}
int main()
{
    cin >> n;
    ktao();
    ok = 1;
    vector<string>v;
    int ans = 0;
    while(ok)
    {
        string res = "";
        for(int i = 1 ; i <= cnt ; i++)
        {
            res += to_string(a[i]);
            if(i != cnt) res += "+";
        }
        ++ans;
        v.push_back(res);
        sinh();
    }
    cout << ans << endl;
    for(auto x : v)
    {
        cout << x << endl;
    }
    return 0;
}
