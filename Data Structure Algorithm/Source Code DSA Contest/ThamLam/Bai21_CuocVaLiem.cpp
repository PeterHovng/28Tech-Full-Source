#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a , b ; cin >> a >> b;
    cout << min({a , b , (a + b) / 3});
}
