/*
https://codeforces.com/problemset/problem/2004/B
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
        int as, ae, bs, be;
        cin >> as >> ae;
        cin >> bs >> be;

        if (ae < bs || be < as) {
            cout << 1 << "\n";
        }
        else if (as == bs && ae == be) {
            cout << ae - as << "\n";
        }
        else {
            int right_boundary = max(ae, be);
            int left_boundary = min(as, bs);
            int total = 0;

            if (abs(right_boundary - min(ae, be)) > 0) {
                total++;
            }

            if (abs(left_boundary - max(as, bs)) > 0) {
                total++;
            }

            int overlap = min(ae, be) - max(as, bs);
            
            if (overlap > 0) {
                total += overlap;
            }

            cout << total << "\n";
        }
    }
    return 0;
}