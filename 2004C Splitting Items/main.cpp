/*
https://codeforces.com/problemset/problem/2004/C
*/

#include <bits/stdc++.h>
#ifdef LOCAL
#include <algo/debug.h>
#else
#define debug(...) 42
#endif

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        sort(c.rbegin(), c.rend());

        long long ans = 0;

        for (int i = 0; i < n; i++){
            ans += (i % 2 == 0? c[i] : -c[i]);
        }

        ans = max(ans - k, n % 2 == 0 ? 0 : c[n-1]);
        cout << ans << "\n";
    }

    return 0;
}