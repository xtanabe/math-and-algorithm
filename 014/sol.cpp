#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            cout << i << endl;
        }
    }
    if (n >=2) {
        cout << n << endl;
    }
    return 0;
}