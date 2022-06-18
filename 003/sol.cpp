#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        ans += t;
    }
    cout << ans << endl;
    return 0;
}