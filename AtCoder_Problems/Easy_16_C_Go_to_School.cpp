#include <iostream>
#include <algorithm>
using namespace std;

int  N;
int A[100009];
int Answer[100009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // 格納された値をインデックスに、インデックスを値に
    for (int i = 1; i <= N; i++) {
        Answer[A[i]] = i;
    }

    for (int i = 1; i <=N; i++) {
        cout << Answer[i] << " ";
    }

    return 0;
}