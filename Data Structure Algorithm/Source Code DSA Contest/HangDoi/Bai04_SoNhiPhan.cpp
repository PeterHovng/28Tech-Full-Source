#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>q;
    vector<string>v;
    q.push("1"); 
    while(true)
    {
        string ans = q.front();
        q.pop();
        v.push_back(ans);
        if(v.size() > 100000) break;
        q.push(ans + "0");
        q.push(ans + "1");
    }
    int cnt = 0;
    int n ; cin >> n;
    for(string x : v)
    {
        ++cnt;
        if(cnt > n) break;
        cout << x << " ";
    }
    return 0;
}