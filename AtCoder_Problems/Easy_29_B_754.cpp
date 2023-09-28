#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int minDiff = 1000;
    for (int i = 0; i < S.length() - 2; i++) {
        int num = (S[i] - '0') * 100 + (S[i + 1] - '0') * 10 + (S[i + 2] - '0');
        minDiff = min(minDiff, abs(num - 753));
    }

    cout << minDiff << endl;
    return 0;
}