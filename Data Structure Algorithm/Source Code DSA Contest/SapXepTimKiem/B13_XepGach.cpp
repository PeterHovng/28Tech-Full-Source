#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    sort(a , a + n , greater<int>());
    int docung = a[0];
    int res = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(docung >= 1)
        {
            ++res;
        }
        else break;
        docung = min(docung - 1 , a[i]);
    }
    cout << res;
}