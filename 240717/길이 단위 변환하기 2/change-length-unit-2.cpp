#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    double yd = 6.8, mi = 0.4;

    cout << fixed;
    cout.precision(1);

    cout << yd << "yd = " << yd * 91.44 << "cm" << endl;
    cout << mi << "mi = " << mi * 160934 << "cm" << endl;

    return 0;
}