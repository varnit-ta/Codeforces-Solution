/*
https://codeforces.com/problemset/problem/2004/A
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
        int n;
        cin >> n;

        vector<int> p(n);
        int min_diff = INT_MAX;

        for (int i = 0; i < n; i++){
            cin >> p[i];

            if (i > 0){
                min_diff = min(min_diff, p[i] - p[i-1]);
            }
        }

        if (n == 2 && min_diff > 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}