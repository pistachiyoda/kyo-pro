#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    int n;
    cin >> n;
    
    int cnt = 0;
    int currentMaxCnt = 0;
    int current;
    int next;
    cin >> current;
    for (int i = 1; i < n; i++) {
        cin >> next;
        // cout << "currnt: " << current << endl;
        // cout << "next: " << next << endl;
        if (current >= next) {
            cnt++;
            currentMaxCnt = max(cnt, currentMaxCnt);
            current = next;
            continue;
        }
        current = next;
        cnt = 0;
    }

    cout << currentMaxCnt << endl;
    return 0;
}