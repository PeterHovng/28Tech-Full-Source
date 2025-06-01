#include <bits/stdc++.h>
using namespace std;
void chuanHoa(string &x)
{
    for(int i = 0 ;i < x.size() ; i++)
    {
        x[i] = tolower(x[i]);
    }
}
int main()
{
    int t ; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s ; getline(cin , s);
        int idx;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(isdigit(s[i]))
            {
                idx = i;
                break;
            }
        }
        string t = s.substr(idx , 10);
        string name = s.substr(0 , s.length() - 10 - 1);
        chuanHoa(name);
        vector<string>v;
        stringstream ss(name);
        string x;
        while(ss >> x)
        {
            v.push_back(x);
        }
        string res = "";
        res += v[v.size() - 1];
        for(int i = 0 ; i < v.size() - 1;i++)
        {
            res += v[i][0];
        }
        res += "@xyz.edu.vn";
        string mk = "";
        mk += to_string(stoi(t.substr(0 , 2)));
        mk += to_string(stoi(t.substr(3 , 2)));
        mk += to_string(stoi(t.substr(6 , 4)));
        cout << res << endl << mk << endl;
    }
}
