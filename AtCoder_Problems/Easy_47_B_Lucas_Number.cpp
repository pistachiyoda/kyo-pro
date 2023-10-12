#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    long long n;
    cin >> n;
    
    long long prev2 = 2;
    long long prev = 1;
    long long current = 0;

    if (n == 0) {
        cout << 2 << endl;
        return 0;
    }

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 1; i < n; i++) {
        current = prev2 + prev;
        prev2 = prev;
        prev = current;
    }

    cout << current << endl;
    return 0;
}