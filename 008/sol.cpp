/**
 * author: eta
 * created: 2022.06.18 18:13:10
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++) {
            if (i + j <= s) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}