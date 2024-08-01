// 3
#include <iostream>
using namespace std;

string str = "";
int n;
char c;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c;
        str = str + c;
    }

    cout << str;
    return 0;
}