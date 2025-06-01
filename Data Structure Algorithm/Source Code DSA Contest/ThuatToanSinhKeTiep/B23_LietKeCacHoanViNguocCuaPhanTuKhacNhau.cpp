#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n + 1];
    int b[n + 1];
    set<int>se; vector<int>v;
    for(int i = 1 ; i <= n ;i++)
    {
        cin >> b[i];
        se.insert(b[i]);
    }
    for(auto x : se) v.push_back(x);
    for(int i = 1 ; i <= v.size() ;i++)
    {
        a[i] = v.size() - i + 1;
    }
    do
    {
        for(int i = 1 ; i <= v.size() ; i++)
        {
            cout << v[a[i] - 1] << " ";
        }
        cout << endl;
    }while(prev_permutation(a + 1 , a + v.size() + 1));
    return 0;
}
