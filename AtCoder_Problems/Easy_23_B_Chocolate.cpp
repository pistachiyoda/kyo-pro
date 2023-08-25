#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, D, X; // 合宿人数、　合宿日数、　残ったチョコ数
    int A;
    int ateDate;
    int chocolateCnt = 0;
    int AIndex;

    cin >> N >> D >> X;
    for (int i = 1; i <= N; i++) {
        cin >> A;
        ateDate = 0;
        AIndex = 1;
        while (ateDate <= D) {
            chocolateCnt++;
            ateDate = A * AIndex + 1;
            AIndex++;
        }
    }
    cout << chocolateCnt + X << endl;
    return 0;
}