#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int robot = 147;
    double gravity_moon = 0.165;

    double result = robot * gravity_moon;

    cout << fixed;
    cout.precision(5);

    cout << robot << " * " << gravity_moon << " = " << result;
    return 0;
}