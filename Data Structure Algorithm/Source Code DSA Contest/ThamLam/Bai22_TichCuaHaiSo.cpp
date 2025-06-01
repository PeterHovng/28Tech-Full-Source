#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n ; cin >> n;
    set<int>se;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            n /= i;
            se.insert(i);
            if(se.size() == 2) break;
        }
    }
    // a , b
    if(n == 1 || se.count(n) == 1 || se.size() <= 1)
    {
        cout << "NO";
    }
    else cout << "YES";
}
