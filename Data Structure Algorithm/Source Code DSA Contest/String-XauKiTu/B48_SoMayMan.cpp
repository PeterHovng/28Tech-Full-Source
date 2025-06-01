#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int tong(int n)
{
    int res = 0;
    while(n != 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;

}
int sum (string s)
{
    int res = 0;
    for(char x : s)
    {
        res += x - '0';
    }
    return res;
}
set<int>se;

void init()
{
    se.insert(9);
    for(int i = 1 ; i <= 10000 ; i++)
    {
        if(se.find(tong(i)) != se.end())
        {
            se.insert(i);
        }
    }
}
int main()
{
    init();
    string s ; cin >> s;
    int res = sum(s);
    if(se.find(res) != se.end()) cout << "YES";
    else cout << "NO"; 
    return 0;
}
