#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n];
    vector<int>v1 ,v2;
    for(int i = 0 ;i < n ; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 1) v1.push_back(a[i]);
        else v2.push_back(a[i]);
    }
    sort(v1.begin() , v1.end() , greater<int>());
    for(int x : v1) cout << x <<  " ";
    sort(v2.begin() , v2.end());
    for(int x : v2) cout << x  << " ";
}