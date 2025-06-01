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

string s ; int ok;
void sinh()
{
    int i = s.length() - 1; 
    while(i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if(i == -1) ok = 0;
    else
    {
        s[i] = '1';
    }
}
bool check(string z)
{
    string t = s;
    reverse(t.begin() , t.end());
    return t == s;
}
int main()
{
    ios::sync_with_stdio(NULL);cout.tie(NULL);
    int n ; cin >> n;
    s = string(n, '0');
    ok = 1;
    while(ok)
    {
        if(check(s))
        {
            cout << s << endl;
        }
        sinh();
    }
    return 0;
}
