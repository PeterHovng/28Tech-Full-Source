#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    pair<int,pair<int,int>>A[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> A[i].first >> A[i].second.first >> A[i].second.second;
    }
    sort(A ,A + n ,[](pair<int,pair<int,int>>a , pair<int,pair<int,int>>b)->bool
    {
        if(a.first == b.first)
        {
            if(a.second.first == b.second.first)
            {
                return a.second.second < b.second.second;
            }
            else return a.second.first < b.second.first;
        }
        else return a.first < b.first;
    });
    for(pair<int,pair<int,int>>x : A)
    {
        cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    }
    
}