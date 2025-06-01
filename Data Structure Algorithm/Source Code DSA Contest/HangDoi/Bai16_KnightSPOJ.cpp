#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
#define all(a) a.begin(),a.end()
#define ms(a,n) memset(a , n , sizeof(a))
#define FOR(i,a,b) for(int i = a ; i <= b ;i++)
#define RFOR(i,a,b) for(int i = b ; i >= a ; i--)
#define factphuongdz() ios::sync_with_stdio(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll>pl;
typedef vector<ll>vll;
typedef vector<int>vii;
typedef pair<int,int>pi;
const int MOD = 1e9 + 7;

struct canh{
    int x , y , w;
};
int BFS(int x , int y , int u , int v)
{
    int arr[9][9];
    ms(arr , 0);
    int dx[] = {1 , 1 , 2 , 2 , -1 , -1 , -2 , -2};
    int dy[] = {2 , -2 , 1 , -1 , 2 , -2 , 1 , -1};
    queue<canh>q;
    q.push({x , y , 0});
    arr[x][y] = 1;
    while(!q.empty())
    {
        canh k = q.front(); q.pop();
        if(k.x == u && k.y == v) return k.w;
        for(int i = 0 ; i < 8 ; i++)
        {
            int i1 = k.x + dx[i];
            int j1 = k.y + dy[i];
            if(i1 <= 8 && i1 >= 1 && j1 >= 1 && j1 <= 8 && !arr[i1][j1])
            {
                q.push({i1 , j1 , k.w + 1});
                arr[i1][j1] = 1;
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(NULL);cout.tie(NULL);
    int t ; cin >> t;
    while(t--)
    {
        string s , t ; cin >> s >> t;
        int x = s[0] - 'a' + 1;
        int y = s[1] - '0';
        int u = t[0] - 'a' + 1;
        int v = t[1] - '0';
        cout << BFS(x , y , u , v) << endl;
    }
    return 0;
}
