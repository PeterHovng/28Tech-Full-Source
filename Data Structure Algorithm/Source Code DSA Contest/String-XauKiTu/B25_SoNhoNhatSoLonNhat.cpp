#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void Max(int n , int s)
{
    string res = "";
    for(int i = 0 ; i < n; i++)
    {
        if(s >= 9)
        {
            res = "9" + res;
            s -= 9;
        }
        else
        {
            res = res + to_string(s);
            s = 0;
        }
    }
    cout << res;
}
void Min(int n , int s)
{
    string res = "";
    --n , --s;
    for(int i = 0 ; i < n;i++)
    {
        if(s >= 9)
        {
            res += "9";
            s -= 9;
        }
        else
        {
            res = to_string(s) + res;
            s = 0;
        }
    }
    s += 1;
    res = to_string(s) + res;
    cout << res;
}
int main()
{
    int n , s ; cin >> n >> s;
    if(n * 9 < s)
    {
        cout << "NOT FOUND" ;
        return 0;
    }
    else
    {
        Min(n , s);
        cout << endl;
        Max(n , s);
    }
}
