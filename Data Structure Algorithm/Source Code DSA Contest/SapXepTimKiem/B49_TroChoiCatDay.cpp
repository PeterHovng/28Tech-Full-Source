#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, a[10001];

bool is_good(double len){
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += (ll)(a[i] / len);
    }
    return ans >= k;
}


void nhap(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
}


int main(){
    nhap();
    double left = 0;
    double right = 1e18;
    double res;
    for(int i = 0; i < 120; i++){
        double m = (left + right) / 2;
        if(is_good(m)){
            left = m;
        }
        else right = m;
    }
    cout << fixed << setprecision(6) << left << endl;
}
