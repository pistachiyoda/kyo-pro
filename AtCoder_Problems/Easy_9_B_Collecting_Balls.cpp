#include <iostream>
#include <string>
using namespace std;

int N, K;
int tmp;
int result = 0;

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> tmp;
        result += K - tmp > tmp - 0 ? (tmp - 0) * 2 : (K - tmp) * 2;
    }

    cout <<result << endl;
    return 0;
}