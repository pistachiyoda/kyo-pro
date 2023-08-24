#include <iostream>
#include <algorithm>
using namespace std;

string S;
int maxCnt = 0;
int tmpCnt = 0;

int main() {
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            tmpCnt += 1;
            continue;
        }
        maxCnt = tmpCnt > maxCnt ? tmpCnt : maxCnt;
        tmpCnt = 0;
    }
    maxCnt = tmpCnt > maxCnt ? tmpCnt : maxCnt;
    cout << maxCnt << endl;
    return 0;
}