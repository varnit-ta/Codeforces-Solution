/*
https://codeforces.com/problemset/problem/2000/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        bool res = true;
        int num;

        cin >> num;

        if (num <= 101){
            cout << "NO\n";
        }else{
            string n = to_string(num);

            if (stoi(n.substr(0, 2)) != 10){
                cout << "NO\n";
            }else{
                int p = 0;

                int j = 2;
                for (j = 2; j < n.size(); j++){
                    p += stoi(n.substr(j, 1)) * pow(10, n.size()-j-1);
                }

                if (p < pow(10, j-3)){
                    cout << "NO\n";
                }else{
                    cout << "YES\n";
                }
            }
        }
    }

    return 0;
}