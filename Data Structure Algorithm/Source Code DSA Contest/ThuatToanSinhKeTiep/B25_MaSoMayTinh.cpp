#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int a[1001] , ok , n;
void ktao()
{
    for(int i  = 1 ; i <= n ; i++)
    {
        a[i] = 1;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == n)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= n; j++)
        {
            a[j] = 1;
        }
    }
}
int main()
{
    cin >> n;
    string s = "";
    for(int i = 1 ; i <= n ;i++)
    {
        s += 'A' + i - 1;
    }
    vector<string>v1,v2;
    do
    {
        v1.push_back(s);
    }while(next_permutation(s.begin() , s.end()));
    ok = 1;
    ktao();
    while(ok)
    {
        string res = "";
        for(int i = 1 ; i <= n ; i++)
        {
            res += to_string(a[i]);
        }
        v2.push_back(res);
        sinh();
    }
    for(auto x : v1)
    {
        for(auto y : v2)
        {
            cout << x << y << endl;
        }
    }
    return 0;
}
