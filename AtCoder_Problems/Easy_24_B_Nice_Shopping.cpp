#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B, M; // A種類の冷蔵庫、 B種類の電子レンジ、M種類の割引券
    cin >> A >> B >> M;

    vector<int> a(A); // 冷蔵庫の値段
    vector<int> b(B); // 電子レンジの値段

    for (auto& num : a) cin >> num;

    // 最安の冷蔵庫 + 最安の電子レンジ
    int minPriceA = *min_element(a.begin(), a.end());
    for (auto& num : b) cin >> num;
    int minPriceB = *min_element(b.begin(), b.end());
    
    // 割引適応の最安
    int x, y, c; // 冷蔵庫no, 電子レンジno, 割引額
    vector<int> discouted(M);

    for (int i = 0; i < M; i++) {
        cin >> x >> y >> c;
        discouted[i] = a[x - 1] + b[y - 1] - c;
    }
    int minDiscountedSetPrice = *min_element(discouted.begin(), discouted.end());

    cout << min(minPriceA + minPriceB, minDiscountedSetPrice) << endl;
    return 0;
}