#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int s;
    unordered_map<int, int> aMap;

    cin >> s;
    int a = s;
    int i = 1;
    while (true)
    {   
        if (aMap.find(a) != aMap.end()) {
            cout << i << endl;
            break;
        }
        aMap[a] = i;
        i++;
        if (a % 2 == 0) {
            a = a / 2;
        } else {
            a = 3 * a + 1;
        } 
    }
    

    return 0;
}