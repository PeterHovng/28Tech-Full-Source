#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , x ; cin >> n >> x;
    if(x <= 32)
    {
        cout << n % (int)pow(2 , x);
    }
    else cout << n;
    return 0;
}