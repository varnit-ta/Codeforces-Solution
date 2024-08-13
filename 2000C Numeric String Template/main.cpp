/*
https://codeforces.com/problemset/problem/2000/C
*/

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums, string& wrd) {
    unordered_map<int, char> ntw;
    unordered_map<char, int> wtn;

    if (nums.size() != wrd.size()) {
        return false;
    }

    for (int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        char s = wrd[i];

        if (ntw.find(n) == ntw.end() && wtn.find(s) == wtn.end()) {
            ntw[n] = s;
            wtn[s] = n;
        } else if (ntw[n] != s || wtn[s] != n) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int m;
        cin >> m;

        for (int i = 0; i < m; i++) {
            string word;
            cin >> word;
            cout << (check(nums, word) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}