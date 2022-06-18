#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, ans = 1;
    for (int i = 0; i < 3; i++) {
        cin >> t;
        ans *= t;
    }
    cout << ans << endl;
    return 0;
}