/*
https://codeforces.com/contest/1997/problem/B

The problem requires identifying free cells in a 2-row grid
where blocking the cell will split the grid into exactly 3
distinct connected regions. The key idea is that initially,
all free cells form a single connected region, and we want to
block specific cells that serve as "connectors" between other
parts of the grid. To do this, we check if the surrounding cells
(horizontally and vertically) are blocked or form part of the connected
region, and if blocking the current cell would isolate it into 3 separate
regions. This is achieved by evaluating specific adjacent cells for each free cell.
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

void solve(){
    int n;
    cin >> n;

    vector<string> a(2);
    cin >> a[0] >> a[1];

    int ans = 0;

    FOR(i, 0, 2){
        FOR(j, 1, n-1){
            if (a[i][j] == 'x') continue;
            if (a[i][j + 1] == 'x') continue;
            if (a[i][j-1] == 'x') continue;
            if (a[i^1][j] == 'x') continue;
            if (a[i^1][j + 1] != 'x') continue;
            if (a[i^1][j - 1] != 'x') continue;
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--){
        solve();
    }

    return 0;
}