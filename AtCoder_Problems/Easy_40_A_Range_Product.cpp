#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (0 < a && a <= b) {
        cout << "Positive" << endl;
    } else if (a <= b && b < 0) {
        if ((b - a + 1) % 2 == 0) cout << "Positive" << endl;
        if ((b - a + 1) % 2 > 0) cout << "Negative" << endl;
    } else if (a <= 0 && 0 <= b) {
        cout << "Zero" << endl;
    }
    return 0;
}