#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll BFS(int s)
{
    queue<pair<int,int>>q;
    q.push({s , 0});unordered_map<int,int>ser;
    ser[s] = 1;

    while(!q.empty())
    {
        int top = q.front().first;
        int cnt = q.front().second;q.pop();
        if(top == 1) return cnt;
        for(int i = 2 ; i <= sqrt(top) ; i++)
        {
            if(top % i == 0)
            {
                int res = max(i , top / i);
                if(ser[res] == 0)
                {
                    q.push({res , cnt + 1});
                    ser[res] = 1;
                }
            }
        }
        if(ser[top - 1] == 0)
        {
            q.push({top - 1 , cnt + 1});
            ser[top - 1] = 1;
        }
    }
    return 0;
}

int main()
{
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        cout << BFS(n) << endl;
    }
}