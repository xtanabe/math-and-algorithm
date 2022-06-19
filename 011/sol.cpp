#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            if (i != 2) {
                cout << " ";
            }
            cout << i;
        }
    }
    cout << endl;
    return 0;
}