#include <iostream>
using namespace std;
#include <string>

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ret = 0;

    for (int i = 1; i <= n; i++) {
        int digit = 1000;
        int digitSum = 0;
        // cout << "i : " << i << endl;
        int tmp = i;
        while (tmp != 0) {
            digitSum += tmp % 10;
            tmp /= 10;
        }
        // cout << "digitSum : " << digitSum << endl;
        if (a <= digitSum && digitSum <= b) {
            ret += i;
            // cout << "==== ret: " << ret << endl;
        }
    }

    cout << ret << endl;

    return 0;
}