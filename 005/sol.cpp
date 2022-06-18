#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, ans = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        ans += t;
    }
    ans %= 100;
    cout << ans << endl;
    return 0;
}