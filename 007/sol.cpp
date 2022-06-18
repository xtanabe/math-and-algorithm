/**
 * author: eta
 * created: 2022.06.18 17:33:47
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, y, ans = 0;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        if (i % x == 0 || i % y == 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}