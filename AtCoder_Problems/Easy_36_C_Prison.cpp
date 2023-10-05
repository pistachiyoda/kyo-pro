#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, M; // N:持ってるカードの枚数 M:ゲートの数
    cin >> N >> M;

    int minVal = 0;
    int maxVal = 1e9;

    int L ,R;
    for (int i = 0; i < M; i++) {
        cin >> L >> R;
        minVal = max(L, minVal);
        maxVal = min(R, maxVal);
    }

    // cout << "minVal:" << minVal << endl;
    // cout << "maxVal:" << maxVal << endl;

    cout << max(maxVal - minVal + 1, 0) << endl;
    return 0;
}