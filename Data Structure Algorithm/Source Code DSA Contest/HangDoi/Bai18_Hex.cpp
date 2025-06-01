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

vii trai(vii a)
{
	vii b(6);
	b[0] = a[3];
	b[1] = a[0];
	b[2] = a[2];
	b[5] = a[5];
	b[3] = a[4];
	b[4] = a[1];
	return b;
}
vii phai(vii a)
{
	vii b(6);
	b[0] = a[0];
	b[3] = a[3];
	b[1] = a[4];
	b[2] = a[1];
	b[4] = a[5];
	b[5] = a[2];
	return b;
}
bool cmp(vii a , vii b)
{
	FOR(i , 0 , 5)
	{
		if(a[i] != b[i]) return false;
	}
	return true;
}
int BFS(vii a , vii b)
{
	queue<pair<vii , int>>q;
	q.push({a , 0});
	while(true)
	{
		pair<vii,int> top = q.front(); q.pop();
		if(cmp(top.fi , b)) return top.se;
		
		q.push({trai(top.fi) , top.se + 1});
		q.push({phai(top.fi) , top.se + 1});
	}
}
int main()
{
	ios::sync_with_stdio(NULL);cout.tie(NULL);
	vii a(6);
	FOR(i , 0 , 5) cin >> a[i];
	vii b(6);
	FOR(i , 0 , 5) cin >> b[i];
	cout << BFS(a , b);
    return 0;
}
