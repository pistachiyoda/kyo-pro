#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, x;
    int a[109];
    int childCnt = 0;

    cin >> N >> x;
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a, a + N);
    for (int i = 0; i < N; i ++) {
        x -= a[i];
        childCnt++;
        if (x <= 0) break;
    }
    if (x != 0) childCnt--;
    cout << childCnt << endl;
    return 0;
}