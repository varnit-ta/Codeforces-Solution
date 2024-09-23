/*
https://codeforces.com/blog/entry/134093
*/

#include <bits/stdc++.h>
#ifdef LOCAL
#else
#define debug(...) 42
#endif

#define ll long long
#define pb push_back
#define F first
#define S second
#define vi vector<int>
#define vll vector<ll>
#define sll set<ll>
#define vii vector<vector<int>>
#define FOR(x, a, b) for (int x = a; x < b; x++)
#define FORR(x, arr) for (auto& x : arr)

using namespace std;

void solve() {
    int n, d, k;
    cin >> n >> d >> k;

    vi dp(n+2, 0);
    FOR(i, 0, k){
        int l, r; cin >> l >> r;
        dp[max(l - d + 1, 1)] += 1;
        dp[r + 1] -= 1;
    }

    FOR(i, 1, n + 2){
        dp[i] = dp[i - 1] + dp[i];
    }
    
    int mx = INT_MIN, mn = INT_MAX;
    int mx_ind = -1, mn_ind = -1;
    FOR(i, 1, n+2-d){
        if (mx != max(mx, dp[i])){
            mx = dp[i];
            mx_ind = i;
        }
        if (mn != min(mn, dp[i])){
            mn = dp[i];
            mn_ind = i;
        }
    }

    cout << mx_ind << " " << mn_ind << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
