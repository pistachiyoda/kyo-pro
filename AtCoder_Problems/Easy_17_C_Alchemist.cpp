#include <iostream>
#include <algorithm>
using namespace std;

int N;
double v[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> v[i];

    sort(v, v + N);
    for (int i = 0; i < N - 1; i++) {
        v[i + 1] = (v[i] + v[i + 1]) / 2;
    }

    cout << v[N - 1] << endl;

    return 0;
}