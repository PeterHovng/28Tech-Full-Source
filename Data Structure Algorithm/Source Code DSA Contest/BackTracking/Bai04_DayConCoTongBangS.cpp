#include <bits/stdc++.h>
using namespace std;
int n, k , a[16] , ok = 0;
void BackTrack(string s, int sum , int pos)
{
    if(sum == k)
    {
        s.pop_back();
        ok = 1;
        cout << "[" << s << "]" << endl;
        return;
    }
    for(int i = pos ; i < n ;i++)
    {
        if(sum + a[i] <= k)
        {
            BackTrack(s + to_string(a[i]) + " " , sum + a[i] , i + 1);
        }
    }
}
int main()
{
    cin >> n >> k;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    BackTrack("" , 0 , 0);
    if(!ok) cout << -1;
}