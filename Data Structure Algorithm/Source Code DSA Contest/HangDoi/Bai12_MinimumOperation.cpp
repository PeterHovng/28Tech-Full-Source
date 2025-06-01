#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int BFS(int a , int b)
{
    set<int>se;
    queue<pair<int,int>>q;
    q.push({a , 0});
    while(!q.empty())
    {
        int top = q.front().first;
        int cnt = q.front().second;q.pop();
        if(top == b) return cnt;
        
        if(top > 1 && !se.count(top - 1))
        {
            q.push({top - 1 , cnt + 1});
        }
        if(top < b && !se.count(top * 2))
        {
            q.push({top * 2 , cnt + 1});
        }
    }
    return 0;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a , b ; cin >>a  >> b;
        cout << BFS(a , b) << endl;
    }
    return 0;
}