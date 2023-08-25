#include <iostream>
#include <vector>
using namespace std;

vector<bool> Eratosthenes(int N) {
    vector<bool> isprime(N + 1, true);

    isprime[0] = isprime[1] = false;

    for (int p = 2; p <= N; ++p) {
        if (!isprime[p])continue;

        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }

    return isprime;
}

int main() {
    int X;
    cin >> X;

    vector<bool> isprime = Eratosthenes(100009);

    for (int i = X; i < 100009; i++) {
        if (isprime[i]) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}