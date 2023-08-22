#include <iostream>
#include <algorithm>
using namespace std;

int N;
int currentNum;
int cnt;
int maxCnt = 0;
int result = 0;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {

        currentNum = i; 
        cnt = 0;
        while (currentNum <= N) {
            if (currentNum % 2 == 0) {
                currentNum = currentNum / 2;
                cnt++;
            } else break;
        }
        if (cnt > maxCnt) {
            maxCnt = cnt;
            result = i;
        }
    }

    if (N == 1) {
        result = 1;
    }
    cout << result << endl;
    return 0;
}