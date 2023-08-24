#include <iostream>
#include <algorithm>
using namespace std;

int N, M, X;
bool A[109];
int tmp;
int rightCost = 0;
int leftCost = 0;

int main() {
    cin >> N >> M >> X;
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        A[tmp] = true;
    }

    // Nゴールの場合
    for (int i = X; i <= N; i++) {
        if (A[i]) rightCost++;
    }

    // 0ゴールの場合
    for (int i = X; i >= 0; i--) {
        if (A[i]) leftCost++;
    }

    cout << min(rightCost, leftCost) << endl;
    return 0;
}