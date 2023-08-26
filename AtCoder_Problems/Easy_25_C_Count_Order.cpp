#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i;
    vector<int> P(N);
    int PIndex;
    vector<int> Q(N);
    int QIndex;
    vector<int> copied(N);


    for (auto& num: P) {
        cin >> num;
    } 
    for (auto& num : Q) cin >> num;

    // next_permutation用の昇順配列
    copied = P;
    sort(copied.begin(), copied.end());

    // P, Qがそれぞれ何番目になるか判定
    i = 0;
    do {
        i++;
        if (copied == P) PIndex = i;
        if (copied == Q) QIndex = i;
    } while (next_permutation(copied.begin(), copied.end()));

    cout << abs(PIndex - QIndex) << endl;
    return 0;
}