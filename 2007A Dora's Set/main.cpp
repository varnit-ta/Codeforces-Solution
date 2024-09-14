/*
https://codeforces.com/problemset/problem/2007/A

Every set of number (a, b, c) has
b = even number
a = b - 1
c = b + 1
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
    int l, r;
    cin >> l >> r;

    int e_num = 0, o_num = 0;

    if (l % 2 == 0 & r % 2 == 0){
        o_num = (r-l+1)/2;
        cout << o_num/2 << "\n";
    }
    else if (l % 2 != 0 & r % 2 != 0){
        e_num = (r-l+1)/2;
        o_num = (r-l+1) - e_num;
        cout << o_num/2 << "\n";
    }else{
        cout << (r-l+1)/4 << "\n";
    }
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