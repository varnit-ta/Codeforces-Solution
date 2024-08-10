#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        long long sum_x = 0, sum_y = 0;

        for (int i = 0; i < k - 1; ++i) {
            int x = i - 50;
            int y = i - 50;
            cout << x << " " << y << "\n";
            sum_x += x;
            sum_y += y;
        }

        int last_x = k * xc - sum_x;
        int last_y = k * yc - sum_y;
        cout << last_x << " " << last_y << "\n";
    }

    return 0;
}