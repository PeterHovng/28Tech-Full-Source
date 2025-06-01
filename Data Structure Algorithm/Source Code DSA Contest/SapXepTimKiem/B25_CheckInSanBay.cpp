#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<long long,long long>> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    long long ans = 0;
    for (int i=0;i<n;i++) {
        ans = max(ans , v[i].first) +v[i].second;
    }
    cout << ans << endl;
    return 0;
}