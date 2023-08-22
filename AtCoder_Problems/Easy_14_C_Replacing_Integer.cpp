#include <iostream>
#include <algorithm>
using namespace std;

long N, K;

int main() {
    cin >> N >> K;

    long ret1 = N % K;
    long ret2 = abs(ret1 - K);

    cout << min(ret1, ret2) << endl;

    return 0;
}