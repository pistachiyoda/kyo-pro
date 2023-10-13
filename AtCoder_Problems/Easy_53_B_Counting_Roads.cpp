#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ans(n, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        ans[a - 1] += 1;
        ans[b - 1] += 1;
    }

    for (int i = 0; i < n; i++) {
        cout <<  ans[i] << endl;
    }


    return 0;
}