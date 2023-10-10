#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main() {
    string w;
    cin >> w;

    vector<int> cnt(26, 0);

    bool isAllEven = true;
    for (int i = 0; i < w.size(); i++) {
        int tmp = w[i];
        cnt[tmp - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++) {
        if(cnt[i] % 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}