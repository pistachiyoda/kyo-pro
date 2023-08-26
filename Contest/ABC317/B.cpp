#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    int N; // 連続する整数の数
    cin >> N;

    int A[N];
    int index;

    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A, A+ N);

    for (int i = 1; i < N; i++) {
        if (A[i] - A[i - 1] != 1) {
            index = i;
            break;
        }
    }

    cout << index + A[0] << endl;
    return 0;
}