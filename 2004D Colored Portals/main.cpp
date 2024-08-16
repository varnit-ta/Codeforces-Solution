/*
https://codeforces.com/problemset/problem/2004/D
*/

#include <bits/stdc++.h>
#ifdef LOCAL
#include <algo/debug.h>
#else
#define debug(...) 42
#endif

using namespace std;

bool check(vector<string>& c, int x, int y){
    return (c[x][0] == c[y][0] || c[x][0] == c[y][1] || c[x][1] == c[y][0] || c[x][1] == c[y][1]);
}

bool inRange(const vector<int>& vec, int lower, int upper) {
    auto lower_it = lower_bound(vec.begin(), vec.end(), lower);
    return (lower_it != vec.end() && *lower_it <= upper);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--){
        int n, q;
        cin >> n >> q;

        vector<vector<int>> s(6);
        vector<string> c(n);
        map<string, int> m;

        m["BR"] = 0;
        m["BG"] = 1;
        m["BY"] = 2;
        m["GR"] = 3;
        m["GY"] = 4;
        m["RY"] = 5;

        for (int i = 0; i < n; i++){
            cin >> c[i];
            s[m[c[i]]].push_back(i);
        }

        while (q--){
            int x, y;
            cin >> x >> y;

            x--; y--;

            if (check(c, x, y)){
                cout << abs(x - y) << "\n";
                continue;
            }

            int ans = numeric_limits<int>::max();

            for (const auto& p: m){
                if (p.first != c[x] && p.first != c[y]){

                    if (inRange(s[m[p.first]], min(x, y), max(x, y))){
                        ans = abs(x - y);
                        break;
                    }

                    else {
                        const vector<int>& indices = s[p.second];

                        auto it = lower_bound(indices.begin(), indices.end(), x);

                        if (it != indices.end()) {
                            ans = min(ans, abs(x - *it) + abs(y - *it));
                        }

                        if (it != indices.begin()) {
                            it--;
                            ans = min(ans, abs(x - *it) + abs(y - *it));
                        }
                    }
                }
            }

            if (ans == numeric_limits<int>::max()){
                cout << -1 << "\n";
            } else {
                cout << ans << "\n";
            }
        }
    }
    return 0;
}
