#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K, Q; // N:参加人数 K:最初のポイント Q:問題数
    cin >> N >> K >> Q;
    vector<int> s(N, K - Q);
    for (int i = 0; i < Q; i++) {
        int tmp;
        cin >> tmp;
        s[tmp - 1] += 1;
    }

    for (int i = 0; i < N; i ++) {
        if (s[i] <= 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}