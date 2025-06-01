#include <bits/stdc++.h>
using namespace std;
vector<int>v[1001];
bool ok[1001];
int dinh[1001];
void DFS(int s , int hight)
{
    ok[s] = true;
    dinh[s] = hight;
    for(int x : v[s])
    {
        if(ok[x] == 0)
        {
            DFS(x , hight + 1);
        }
    }
}
int main()
{
    int n ; cin >> n;
    for(int i = 1 ; i < n ;i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(1 , 0);
    for(int i = 1 ; i <= n ; i++)
    {
        cout << dinh[i] << " ";
    }
}
