#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> cnt(m, 0);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int tmp;
            cin >> tmp;
            cnt[tmp - 1] += 1;
        }
    }

    int ret = 0;
    for(int i = 0; i < m; i++) {
        if (cnt[i] == n) ret++;
    }

    cout << ret << endl;

    return 0;
}