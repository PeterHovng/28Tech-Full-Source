#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
void chuyen(int n , int a , int c)
{
    v.push_back({a , c});
}
void thap(int n , int a , int b , int c)
{
    if(n == 1) chuyen(n , a , c);
    else
    {
        thap(n - 1 , a , c , b);
        chuyen(n , a , c);
        thap(n -1 , b , a , c);
    }
}
int main()
{
    int n ; cin >> n;
    int a = 1 , b = 2 , c = 3;
    thap(n , a , b , c);
    cout << v.size() << endl;
    for(auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
    return  0;
}
