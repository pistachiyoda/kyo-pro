#include <iostream>
using namespace std;

int main() {
    long N, A, B; // N個のボール、A個の青いボール、B個の赤いボール
    cin >> N >> A >> B;

    long set = A + B;
    long ret = A * (N / set) + min(A, N % set);
    cout << ret << endl;
    return 0;
}