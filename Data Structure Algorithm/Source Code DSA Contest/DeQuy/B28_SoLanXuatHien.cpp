#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    int x ; cin >> x;
    auto it = lower_bound(a , a + n , x);
    if(*it != x) cout << 0;
    else
    {
        auto p = upper_bound(a ,a  + n , x);
        --p;
        cout << distance(it , p) + 1;
    }
    return  0;
}
