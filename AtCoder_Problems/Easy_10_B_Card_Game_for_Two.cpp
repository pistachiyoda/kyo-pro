#include <iostream>
#include <algorithm>
using namespace std;

int N;
int a[200];
int Alice = 0;
int Bob = 0;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) cin >> a[i];
    sort(a, a + N, greater<int>());
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            Alice += a[i];
        } else {
            Bob += a[i];
        }
    }

    cout << Alice - Bob << endl;
    return 0;
}