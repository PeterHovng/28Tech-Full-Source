#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int n , a[23] , x[23];
vector<string>v;
void backtrack(int pos , int i)
{
    if(i >= 3)
    {
        string res = "";
        for(int j = 1 ; j < i ; j++)
        {
            res += to_string(x[j]) + " ";
        }
        v.push_back(res);
    }
    for(int j = pos ; j <= n ; j++)
    {
        if(a[j] > x[i - 1])
        {
            x[i] = a[j];
            backtrack(j + 1 , i + 1);
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    backtrack(1 , 1);
    sort(v.begin() , v.end());
    for(string x : v)
    {
        cout << x << endl;
    }
}