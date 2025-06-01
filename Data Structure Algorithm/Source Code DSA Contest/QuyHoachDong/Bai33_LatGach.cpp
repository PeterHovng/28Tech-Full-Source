#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = (int) 1e9 + 7;
#define pb push_back

ll dp[1001][1 << 11];

void generate_next_masks(int current_mask, int i, int n, int next_mask, vector<int> &next_masks) {
    if (i == n) {
        next_masks.pb(next_mask);
        return;
    }

    if ((current_mask & (1 << i)) != 0) {
        generate_next_masks(current_mask, i+1, n, next_mask, next_masks);
    }

    if (i != n-1) {
        if ((current_mask & (1 << i)) == 0 && (current_mask & (1 << (i+1))) == 0) {
            generate_next_masks(current_mask, i+2, n, next_mask, next_masks);
        }
    }

    if ((current_mask & (1 << i)) == 0) {
        generate_next_masks(current_mask, i+1, n, (next_mask + (1 << i)), next_masks);
    }
}

ll solve(int col, int mask, int m, int n) {
    if (col == m+1) {
        if (mask == 0) return 1;
        return 0;
    }

    if (dp[col][mask] != -1) return dp[col][mask];

    vector<int> next_masks;
    ll ans = 0;
    generate_next_masks(mask, 0, n, 0, next_masks);

    for (int x : next_masks) {
        ans = (ans + solve(col + 1, x, m, n)) % MOD;
    }

    return dp[col][mask] = ans;
}

void inp() {
    int n,m; cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    cout << solve(1, 0, m, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    inp();
    return 0;
}