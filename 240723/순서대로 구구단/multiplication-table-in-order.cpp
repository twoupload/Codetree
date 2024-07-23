#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;


    for(int i = 1; i <= 9; i++) {

        cout << a << " * " << i << " = " << a * i << "  " << b << " * " << i << " = " << b * i << endl;
    }
    return 0;
}