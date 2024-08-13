/*
https://codeforces.com/problemset/problem/2000/B
*/

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& seats, int size) {
    vector<bool> bus(size, false);
    bool any_occupied = false;

    for (int i = 0; i < size; i++) {
        if (!any_occupied) {
            bus[seats[i]] = true;
            any_occupied = true;
        } else {
            bool has_neighbor = (seats[i] > 0 && bus[seats[i] - 1]) || (seats[i] < size - 1 && bus[seats[i] + 1]);
            if (!has_neighbor) {
                return false;
            }
            bus[seats[i]] = true;
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
        int seats;
        cin >> seats;

        vector<int> seating(seats);
        for (int i = 0; i < seats; i++) {
            cin >> seating[i];
            seating[i]--;
        }

        if (check(seating, seats)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}