#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int a, b, c, x;

    cin >> a >> b >> c; // 持ってる硬貨の枚数
    cin >> x; //　硬貨の組み合わせでx円にしたい

    int ans = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if ((500 * i + 100 * j + 50 * k ) == x) {
                    ans += 1;
                } 
            }
        }
    }

    cout << ans << endl;
    return 0;
}