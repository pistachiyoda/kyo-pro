#include <iostream>
#include <algorithm>
using namespace std;

int  N, X;
int A[100009];
int M, L, R;

int main() {
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];
    L = 1;
    R = N;

    while (L <= R) {
        M = (L + R) / 2;
        if (X < A[M]) {
            R = M - 1;
        }
        if (X == A[M]) {
            cout << M << endl;
            return 0;
        }
        if (X > A[M]) {
            L = M + 1;
        }
    }

    return 0;
}