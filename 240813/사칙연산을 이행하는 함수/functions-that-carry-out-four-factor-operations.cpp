#include <iostream>
using namespace std;

int x, y;
char a;

void cal() {
    if(a == '+') {
        cout << x << " + " << y << " = " << x + y << endl;
    } else if(a == '-') {
        cout << x << " - " << y << " = " << x - y << endl;
    } else if(a == '*') {
        cout << x << " * " << y << " = " << x * y << endl;
    } else {
        cout << x << " / " << y << " = " << x / y << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> x >> a >> y;

    cal();
    return 0;
}