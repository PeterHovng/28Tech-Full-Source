#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime[10001];
void sang()
{
    prime[1] = prime[0] = 1;
    for(int i = 2 ; i <= 100 ; i++)
    {
        if(!prime[i])
        {
            for(int j = i * i ; j <= 10000 ; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
int BFS(int s , int t)
{
    queue<pair<int,int>>q;
    q.push({s , 0});
    int check[100001];
    memset(check , 0 , sizeof(check));
    check[s] = 1;
    while(!q.empty())
    {
        pair<int,int> top = q.front();q.pop();
        if(top.first == t) return top.second; 
        vector<int>tmp;
        int res = top.first;
        while(res)
        {
            tmp.push_back(res % 10); res /= 10;
        }
        reverse(tmp.begin() , tmp.end());
        for(int i = 0 ; i < 4 ; i++)
        {
            for(int j = 0 ; j <= 9 ; j++)
            {
                if(i == 0 && j == 0) continue;
                if(tmp[i] != j)
                {
                    int ans = 0;
                    for(int k = 0 ; k < 4 ; k++)
                    {
                        if(k == i) ans = ans * 10 + j;
                         else ans = ans * 10 + tmp[k];
                    }
                    if(prime[ans] == 0 && !check[ans])
                     {
                        q.push({ans , top.second + 1});
                        check[ans] = 1;
                    }
                }
            }
        }
    }
    return -1;
}
int main()
{
    int t ; cin >> t;
    sang();
    while(t--)
    {
        int l , r ; cin >> l >> r;
        cout << BFS(l , r) << endl;
    }
    return 0;
}