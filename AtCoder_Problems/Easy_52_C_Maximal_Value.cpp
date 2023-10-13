#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
    int n;
    cin >> n;
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> b[i];

    int ret = 0;

    for (int i = 1; i < n - 1; i++) {
        ret += min(b[i], b[i - 1]);
    }

    ret += b[0] += b[n - 2];

    cout <<  ret << endl;

    return 0;
}