#include <iostream>
using namespace std;
#include <string>

int main() {
    string a, b;
    cin >> a >> b;

    string ret = "EQUAL";
    if (a.size() > b.size()) {
        ret = "GREATER";
    } else if (a.size() < b.size()) {
        ret = "LESS";
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] > b[i]) {
                ret = "GREATER";
                break;
            }
            if (a[i] < b[i]) {
                ret = "LESS";
                break;
            }
        }
    }

    cout << ret << endl;

    return 0;
}