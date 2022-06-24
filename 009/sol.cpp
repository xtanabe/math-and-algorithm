#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n, s;
    cin >> n >> s;
    int a[61];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < (1LL << n); i++) {
        ll sum = 0;
        for (int j = 1; j <= n; j++) {
            if ((i & (1LL << (j-1))) != 0) {
                sum += a[j];
            }
        }
        if (sum == s) {
            cout << "Yes"  << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}