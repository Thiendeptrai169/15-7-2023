#include <iostream>

using namespace std;

long long t, n, m;

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        cout << ((n * (n + 1)) >> 1) * ((m * (m + 1)) >> 1) << '\n';
    }
    return 0;
}