#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    long long a, b, c, k;
    cin >> a >> b >> c >> k;

    long long x = a - b;
    if (x > 1000000000000000000) cout << "Unfair" << endl;
    if (k % 2) {
        cout << -x << endl;
    } else {
        cout << x << endl;
    }

    return 0;
}