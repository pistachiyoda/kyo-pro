#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n; // 文字列の長さ
    cin >> s; // 文字列

    int ret = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') {
            current += 1;
        }
        if (s[i] == 'D') {
            current -= 1;
        }
        ret = max(current, ret);
    }

    cout << ret << endl;
    return 0;
}