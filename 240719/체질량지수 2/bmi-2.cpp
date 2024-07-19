// 7
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int hei, kg;
    cin >> hei >> kg;

    double rate = kg * (100 * 100) / (hei * hei);

    if((int) rate >= 25) {
        cout << (int) rate << endl;
        cout << "Obesity" << endl;
    } else {
        cout << (int) rate;
    }
    return 0;
}