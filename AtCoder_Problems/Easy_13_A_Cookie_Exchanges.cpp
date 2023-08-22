#include <iostream>
using namespace std;

int A, B, C;
int tmpA, tmpB, tmpC;
int cnt = 0;

int main() {
    cin >> A >> B >> C;

    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        if (A == B && B == C) {
            cout << -1 << endl;
            return 0;
        }

        tmpA = A;
        tmpB = B;
        tmpC = C;

        A = tmpB / 2 + tmpC / 2;
        B = tmpA / 2 + tmpC / 2;
        C = tmpC / 2 + tmpA / 2;

        cnt++;
    }

    cout << cnt << endl;

    return 0;
}