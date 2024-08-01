#include <iostream>
using namespace std;

int n;
char c;
string str = "";

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c;
        str = str + c;
    }

    cout << str[2] << " " << str[4] << " " << str[7] << endl;
    return 0;
}