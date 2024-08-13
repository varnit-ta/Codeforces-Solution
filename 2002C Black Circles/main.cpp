/*
https://codeforces.com/problemset/problem/2002/C
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--){
        int num_points;
        cin >> num_points;

        vector<int> x(num_points), y(num_points);

        for (int i = 0; i < num_points; i++){
            cin >> x[i] >> y[i];
        }

        int xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;

        bool res = true;
        long long dist = 1LL * (xs - xt) * (xs - xt) + 1LL * (ys - yt) * (ys - yt);

        for (int i = 0; i < num_points; i++){
            long long r = 1LL * (x[i] - xt) * (x[i] - xt) + 1LL * (y[i] - yt) * (y[i] - yt);

            if (r <= dist){
                res = false;
                break;
            }
        }

        if (res){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }

    return 0;
}