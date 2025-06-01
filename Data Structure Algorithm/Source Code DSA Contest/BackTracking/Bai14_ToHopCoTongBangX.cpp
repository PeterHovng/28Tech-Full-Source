#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n , s , a[102] , x[102];
vector<string>v;

void QL(int pos , int sum ,  int cnt)
{
    if(sum == s)
    {
        string res = "{";
        for(int i = 0 ; i < cnt ; i++)
        {
            res += to_string(x[i]) ;
            if(i != cnt - 1)
            {
                res += " ";
            }
            else res += "}";
        }
        v.push_back(res);
    }
    for(int j = pos ; j <= n ; j++)
    {
        if(sum + a[j] <= s)
        {
            x[cnt] = a[j];
            QL(j , sum + a[j] , cnt + 1);
        }
    }
}

int main()
{
    cin >> n >> s;
    for(int i = 1 ; i <= n ;i++)
    {
        cin >> a[i];
    }
    sort(a + 1 , a + n + 1);
    QL(1 , 0 , 0);
    if(v.size() == 0)
    {
        cout  << -1;
        return 0;
    }
    cout << v.size() << endl;
    for(string x : v)
    {
        cout << x << endl;
    }
}
