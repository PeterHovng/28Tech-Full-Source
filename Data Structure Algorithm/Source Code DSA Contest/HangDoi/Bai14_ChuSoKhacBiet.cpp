#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>v;
void init()
{
    queue<int>q;
    int visitted[10001];
    memset(visitted , 0 ,sizeof(visitted));
    for(int i = 1 ; i <= 5 ;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        int top = q.front();
        v.push_back(top);
        q.pop();
        memset(visitted , 0 ,sizeof(visitted));
        int tmp = top;
        while(tmp)
        {
            visitted[tmp % 10] = 1;
            tmp /= 10;
        }
        for(int i = 0 ; i <= 5 ; i++)
        {
            if(visitted[i] == 0)
            {
                q.push(top * 10 + i);
            }
        }
    }
}
int main()
{
    int t ; cin >> t;
    init();
    while(t--)
    {
        int l , r ; cin >> l >> r;
        int ans = 0;
        for(int x : v)
        {
            if(x >= l && x <= r) ++ans;
        }
        cout << ans <<endl;;
    }
    return 0;
}