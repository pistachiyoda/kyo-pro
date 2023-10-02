#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ret = "yes";

    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j]) {
                ret = "no";
                break;
            }
        }
    }

    cout << ret << endl;
    return 0;
}