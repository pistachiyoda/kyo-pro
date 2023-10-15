#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main() {
    int n;
    cin >> n;
    vector<string> memo(n);

    string ans = "Yes";
    string tmp;
    cin >> tmp;
    for (int i = 0; i < n - 1; i++) {
        memo[i] = tmp;
        char prevEnd = tmp[tmp.size() - 1];
        cin >> tmp;
        if (prevEnd != tmp[0]) {
            ans = "No";
            break;
        }
        for (int j = 0; j < n - (n - i); j++) {
            if (memo[j] == tmp) {
                ans = "No";
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}