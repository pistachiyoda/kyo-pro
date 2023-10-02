#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";

    // アルファベットフラグ管理の配列を作る
    vector<bool> alFlags(26, false);

    for (int i = 0; i < s.size(); i++) {
        int alNum = s[i];
        alFlags[alNum - 97] = true;
    }

    bool IsAllTrue = true;
    int isMin = 122;
    // フラグが全てtrueになったらans = "None"
    // フラグがfalseのものの中から最小のものを探す
    for (int i = 0; i < 26; i++) {
        if (!alFlags[i]) {
            IsAllTrue = false;
            isMin = min(isMin, i + 97);
        }
    }

    if (IsAllTrue) {
        cout << "None" << endl;
    } else {
        char al = isMin;
        cout << static_cast<char>(al) << endl;
    }
    return 0;
}