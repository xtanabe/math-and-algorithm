#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long na[4] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        na[a/100-1]++;
    }
    long long ans = na[0]*na[3] + na[1]*na[2];
    cout << ans << endl;
    return 0;
}