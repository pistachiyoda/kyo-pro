#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int currentVal;
int prevVal = 0;
int between = 0;
int longest = 0;
int first = 0;
int last = 0;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i ++) {
        cin >> currentVal;
        if (i == 1) first = currentVal;
        if (i == M) last = currentVal;
        between = currentVal - prevVal;
        prevVal = currentVal;
        longest = longest < between ? between : longest;
    }

    longest = longest < N - last + first  ?  N - last + first : longest;
    cout << N - longest << endl;
    return 0;
}