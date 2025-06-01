#include <bits/stdc++.h>
using namespace std;
struct grap
{
    int x , y , z;
};
int main()
{
    int n ; cin >> n;
    vector<grap>v;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ;  j <= n ; j++)
        {
            int x ; cin >> x;
            if(j > i && x != 0) v.push_back({i , j , x});
        }
    }
    for(grap x : v) cout << x.x << " " << x.y << " " << x.z << endl;
}
