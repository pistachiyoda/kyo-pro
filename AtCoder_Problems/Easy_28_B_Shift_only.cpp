#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long> A(N);

    for (int i = 0; i < N; i++) cin >> A[i];

    int ret = 0;
    bool isEnd = false;

    while (!isEnd) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2  == 1) {
                isEnd = true;
                break;
            }
            A[i] /= 2;
        }
        if (!isEnd) ret++;
    }

    cout << ret << endl;
}