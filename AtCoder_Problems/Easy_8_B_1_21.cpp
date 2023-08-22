#include <iostream>
#include <string>
using namespace std;

string a, b;
int num;
int result = 0;

int main() {
    cin >> a >> b;

    num = stoi(a + b);
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    
    return 0;
}