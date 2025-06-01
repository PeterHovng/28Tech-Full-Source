#include<bits/stdc++.h>
using namespace std; 

int a[100] , n , ok;

void ktao()
{
    for(int i = 1 ; i <= n ;i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
}
int main(){
    cin >> n;
    ok = 1;
    vector<string>v;
    ktao();
    sinh(); 
    while(ok)
    {
        string res = "";
        for(int i = 1 ; i <= n ;i++)
        {
            if(a[i] == 1)
            {
                res += to_string(i) + " ";
            }
        }
        v.push_back(res);
        sinh();
    }
    sort(v.begin() , v.end());
    for(string x : v)
    {
        cout << x << endl;
    }
}
