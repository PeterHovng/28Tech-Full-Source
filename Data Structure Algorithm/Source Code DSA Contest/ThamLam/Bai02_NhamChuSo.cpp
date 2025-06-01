#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

void nhoNhat(string &x)
{
    for(int i = 0 ; i < x.length() ; i++)
    {
        if(x[i] == '6') x[i] = '5';
    }
}
void lonNhat(string &x)
{
    for(int i = 0 ; i < x.length() ; i++)
    {
        if(x[i] == '5') x[i] = '6';
    }
}
int main()
{
    string a , b ; cin >> a >> b;
    lonNhat(a) ; lonNhat(b);
    cout << stoll(a) + stoll(b) << " ";
    nhoNhat(a) ; nhoNhat(b);
    cout << stoll(a) + stoll(b);
    return 0;
}
