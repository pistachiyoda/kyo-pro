#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main() {
    string s;
    cin >> s;

    int cntA = 0;
    int cntB = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2) {
            if (s[i] != '0') cntA++;
            if (s[i] != '1') cntB++;
        } else {
            if (s[i] != '1') cntA++;
            if (s[i] != '0') cntB++;
        }
    }

    cout << min(cntA, cntB) << endl;

    return 0;
}