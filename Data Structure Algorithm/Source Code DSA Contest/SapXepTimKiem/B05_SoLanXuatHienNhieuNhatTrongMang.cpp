#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n]; 
    map<int,int>mp;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        mp[a[i]]++; 
    }
    int Max = 0 , number;
    for(pair<int,int> x : mp)
    {
        if(x.second > Max)
        {
            Max = x.second;
            number = x.first;
        }
    }
    cout << number << " " << Max ;
}