#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    int h, w;
    cin >> h >> w;

    for (int i = 0; i < w + 2; i++) {
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < h; i++) {
        cout << "#";
        for (int j = 0; j < w; j++) {
            char tmp;
            cin >> tmp;
            cout << tmp;
        }
        cout << "#" << endl;
    }

    for (int i = 0; i < w + 2; i++) {
        cout << "#";
    }
    cout << endl;

    return 0;
}