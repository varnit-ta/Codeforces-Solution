/*
https://codeforces.com/problemset/problem/2000/E
*/

#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;

  while (tt--) {
    int n, m, k;
    cin >> n >> m >> k;

    int w;
    cin >> w;

    vector<int> a(w);

    for (int i = 0; i < w; i++) {
      cin >> a[i];
    }

    vector<int> coeff;
    coeff.reserve(n * m);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int i1 = max(0, i - k + 1);
        int j1 = max(0, j - k + 1);
        int i2 = min(i, n - k);
        int j2 = min(j, m - k);
        coeff.push_back((i2 - i1 + 1) * (j2 - j1 + 1));
      }
    }

    sort(coeff.rbegin(), coeff.rend());
    sort(a.rbegin(), a.rend());

    int64_t ans = 0;

    for (int i = 0; i < w; i++) {
      ans += int64_t(a[i]) * coeff[i];
    }

    cout << ans << '\n';
  }
  return 0;
}
