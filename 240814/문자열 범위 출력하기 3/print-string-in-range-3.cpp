/// 4
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for(int i = 4; i < 17; i++) {
        cout << str[i];
    }
    return 0;
}