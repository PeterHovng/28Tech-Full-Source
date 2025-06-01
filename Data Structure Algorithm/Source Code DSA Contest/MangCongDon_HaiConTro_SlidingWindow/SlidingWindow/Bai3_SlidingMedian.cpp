#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
#define sz(a) a.size()
#define all(a) a.begin(),a.end()
#define ms(a,n) memset(a , n , sizeof(a))
#define FOR(i,a,b) for(int i = a ; i <= b ;i++)
#define RFOR(i,a,b) for(int i = b ; i >= a ; i--)
#define fact_io() ios::sync_with_stdio(NULL);cout.tie(NULL);
#define sz(a) a.size()
#define HoangPhuongDepZaiii int main
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll>pl;
typedef vector<ll>vll;
typedef vector<int>vii;
typedef pair<int,int>pi;
const int MOD = 1e9 + 7;

inline ll gcd(ll a , ll b) {return b == 0 ? a : gcd(b , a % b);}
inline ll lcm(ll a , ll b) {return a / gcd(a , b) * b ;}

HoangPhuongDepZaiii()
{
    ios::sync_with_stdio(NULL);cout.tie(NULL);cin.tie(NULL);
    int n , k ; cin >> n >> k;
    int a[n]; FOR(i , 0 , n - 1) cin >> a[i];
    ordered_set<int>se;
    FOR(i , 0 , k - 1)
    {
        se.insert(a[i]);
    }
    cout << *se.find_by_order((k - 1) / 2) << " ";
    FOR(i , k , n - 1)
    {
        se.erase(se.find_by_order(se.order_of_key(a[i - k])));
        se.insert(a[i]);
        cout << *se.find_by_order((k - 1)/ 2) << " ";
    }
    return  0;
}
