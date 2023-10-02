#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int a, b;
    string s;

    cin >> a >> b; // a部分、b部分の郵便番号文字数
    cin >> s; // 文字列

    string ans = "Yes";

    for (int i = 0; i < a + b + 1; i ++) {
        if (i < a || i > a + 1) {
            if (!isdigit(s[i])) ans = "No";
        }
        if (i == a) {
            if (s[i] != '-') ans = "No";
        }
    }

    cout << ans << endl;
    return 0;
}