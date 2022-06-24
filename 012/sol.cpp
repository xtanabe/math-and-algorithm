#include <bits/stdc++.h>

using namespace std;

bool isprime(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    isprime(n) ? cout << "Yes" : cout << "No";
    cout << endl;
    return 0;
}