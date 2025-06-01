#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tu , mau ; cin >> tu >> mau;
    while(true)
    {
        if(mau % tu == 0)
        {
            cout << 1 << "/" << mau / tu;
            break;
        }
        ll res = mau / tu + 1;
        cout << 1 << "/" << res << " + ";
        tu = tu * res - mau;
        mau = mau * res;
    }
    return 0;
}
