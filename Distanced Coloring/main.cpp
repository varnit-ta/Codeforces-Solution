/*
https://codeforces.com/contest/2002/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin >> tt;
 
    while (tt--) {
        int n, m, k;
        cin >> n >> m >> k;
 
        cout << min(n,k) * min(m,k) << endl;
    }
 
    return 0;
}