#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    int N, H, X; // 傷薬の種類、モンスターの体力、X以上の体力にしたい
    cin >> N >> H >> X;

    int P[N];

    for (int i = 0; i < N; i++) cin >> P[i];

    int minDiff = 10000;
    int minN;
    for (int i = 0; i < N; i++) {
        if (H + P[i] < X ) continue;
        if (abs(X - (H + P[i])) < minDiff) {
            minN = i;
            minDiff = abs(X - (H + P[i]));
        }
    }
    cout << minN + 1 << endl;
    return 0;
}