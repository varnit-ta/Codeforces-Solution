#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin >> tt;
 
    while (tt--) {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
 
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
 
        cout << (a == b || vector<int>(a.rbegin(), a.rend()) == b ? "Bob" : "Alice") << endl;
    }
 
    return 0;
}