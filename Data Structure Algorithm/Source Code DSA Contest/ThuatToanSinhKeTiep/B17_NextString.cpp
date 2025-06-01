#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
string s;

void sinh()
{
    int i = s.length() - 2;
    while(i >= 0 && s[i] >= s[i + 1])
    {
        --i;
    }
    if(i == -1) cout << "NOT EXIST";
    else
    {
        int j = s.length() - 1;
        while(s[i] >= s[j]) --j;
        swap(s[i] , s[j]);
        reverse(s.begin() + i + 1 , s.end());
        cout << s;
    }
}

int main()
{
    cin >> s;
    sinh();
    return 0;
}
