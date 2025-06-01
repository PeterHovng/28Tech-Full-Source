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
int check[1001][1001];
int arr[1001][1001] ;
int BFS(int n , int m)
{
    queue<canh>q;
    q.push({1 , 1 , 0});
    check[1][1] = 1;
    while(!q.empty())
    {
        canh k = q.front(); q.pop();
        if(k.x == n && k.y == m) return k.w;
        
        if(k.x + arr[k.x][k.y] <= n && check[k.x + arr[k.x][k.y]][k.y] == 0)
        {
            q.push({k.x + arr[k.x][k.y] , k.y , k.w + 1});
            check[k.x + arr[k.x][k.y]][k.y] = 1;
        }
        if(k.y + arr[k.x][k.y] >= 1 && k.y + arr[k.x][k.y] <= m && check[k.x][k.y + arr[k.x][k.y]] == 0)
        {
            q.push({k.x , k.y + arr[k.x][k.y] , k.w + 1});
            check[k.x][k.y + arr[k.x][k.y]] = 1;
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
        int n , m ; cin >> n >> m;
        ms(check , 0);
        for(int i = 1 ; i <= n ;i++)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << BFS(n , m) << endl;
    }
    return 0;
}
