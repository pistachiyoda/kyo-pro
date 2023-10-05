#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> cp = a;

    sort(a.begin(), a.end());
    int maxVal = *max_element(a.begin(), a.end());
    int secondMaxVal = a[n - 2];

    for (int i = 0; i < n; i++) {
        if (cp[i] == maxVal) {
            cout << secondMaxVal << endl;
            continue;
        }
        cout << maxVal << endl;
    }

    return 0;
}