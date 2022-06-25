#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    long long a[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n-1; i++) {
        a[i+1] = gcd(a[i], a[i+1]);
    }
    cout << a[n] << endl;
    return 0;
}