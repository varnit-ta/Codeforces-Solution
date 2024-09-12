/*
https://codeforces.com/contest/166/problem/E

Intution:
https://www.youtube.com/watch?v=qQwQbD8ju2s
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
#define vii vector<vector<int>>
#define FOR(x, a, b) for (int x = a; x < b; x++)
#define FORR(x, arr) for (auto& x : arr)

using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    vector<vector<ll>> dp(2, vector<ll>(n + 1, 0));
    dp[0][0] = 1;

    FOR(i, 1, n+1){
        dp[0][i] = 3 * dp[1][i - 1] % MOD;
        dp[1][i] = (2 * dp[1][i-1] + dp[0][i-1]) % MOD;
    }

   cout << dp[0][n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}