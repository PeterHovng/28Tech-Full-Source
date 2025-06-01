#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m;
    set<int>s1 , s2 , s3;
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        s1.insert(x);
    }
    for(int i = 0 ; i< m ;i++)
    {
        int x ; cin >> x;
        s2.insert(x);
    }
    for(int x : s1)
    {
        if(s2.count(x)==0) s3.insert(x);
    }
    for(int x : s2)
    {
        if(s1.count(x) == 0) s3.insert(x);
    }
    for(int x : s3) cout << x << " ";
}