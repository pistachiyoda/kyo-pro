#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> t(5);
    for (int i = 0; i < 5; i++) cin >> t[i];

    int minTime = 130 * 5;
    do {
        int time = 0;
        for (int num: t) {
            if (time % 10 > 0) time += 10 - time % 10;
            time += num;
        }
        minTime = min(time, minTime);
    } while (next_permutation(t.begin(), t.end()));

    cout << minTime << endl;
    return 0;
}