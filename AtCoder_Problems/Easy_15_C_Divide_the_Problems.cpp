#include <iostream>
#include <algorithm>
using namespace std;

int  N;
int d[100009];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];
    sort(d, d + N);

    cout << d[N / 2] - d[N / 2 - 1] << endl;
    return 0;
}