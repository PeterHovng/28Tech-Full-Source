#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int x[1001] ,n , r, ok; 
void ktao()
{
    for(int i = 1 ; i <= n ;i++)
    {
        x[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        x[i] = 1;
    }
}
bool check()
{
    int cnt = 0 , res = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        if(x[i] == 1)
        {
            ++cnt;
        }
        else cnt = 0;
        
        if(cnt > res) res = cnt;
        else if(cnt == res && res == r) return false;
    }
    return res == r;
}
int main()
{
    cin >> n >> r;
    ok = 1;
    ktao(); 
    vector<string>v1 , v2;
    while(ok)
    {
        string s = "" , res = "";
        int sum = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            sum += x[i];
            s += to_string(x[i]);
            res += to_string(x[i]);    
        }
        if(sum == r) v1.push_back(s);
        if(check()) v2.push_back(res);
        sinh();
    }
    sort(v1.begin() , v1.end());
    for(auto x : v1)
    {
        cout << x << " ";

    }
    cout << endl;
    for(auto x : v2) cout << x << " ";
    return 0;
}
