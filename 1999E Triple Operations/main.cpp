#include <iostream>
#include <cmath>

using namespace std;

int check(int a){
    int count = 0;
    while (a > 0){
        count += 1;
        a /= 3;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int start, end;
        cin >> start >> end;

        int maxDiv = check(start);
        int total = maxDiv;
        int next = pow(3, maxDiv);

        while (next <= end){
            total += (next - start) * maxDiv;
            start = next;
            next *= 3;
            maxDiv++;
        }

        if (start <= end) {
            total += (end - start + 1) * maxDiv;
        }

        cout << total << endl;
    }

    return 0;
}
