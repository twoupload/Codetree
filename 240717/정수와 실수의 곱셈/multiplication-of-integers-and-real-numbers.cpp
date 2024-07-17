#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 9;
    double b = 358.273;

    cout << fixed;
    cout.precision(3);
    cout << a << " * " << b << " = " << (double)a * b;
    return 0;
}