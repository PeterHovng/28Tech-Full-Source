#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

vector<int>v[100001];
int check[100001];
vector<string>duongdi;
void DFS(int s)
{
    check[s] = 1;
    for(int x : v[s])
    {
        if(!check[x])
        {
            string res = "";
            res += to_string(s) + "->" + to_string(x);
            duongdi.push_back(res);
            DFS(x);
        }
    }
}
int main()
{
    int n , m , s ; cin >> n >> m >> s;
    for(int i = 1 ; i <= m;i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);v[b].push_back(a);
    }
    for(int i = 1 ; i <= n ;i++)
    {
        sort(v[i].begin() , v[i].end());
    }
    DFS(s);
    for(auto x : duongdi)
    {
        cout << x << endl;
    }
    return 0;
}
