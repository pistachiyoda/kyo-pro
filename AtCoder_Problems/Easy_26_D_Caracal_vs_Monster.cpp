#include <iostream>
using namespace std;

int main() {
    long H;
    cin >> H;

    long ret = 1;
    long section = 1;

    while (H > 1) {
        long tmp = H / 2;
        section *= 2;
        ret += section;
        H = tmp;
    }

    cout << ret << endl;
    return 0;
}