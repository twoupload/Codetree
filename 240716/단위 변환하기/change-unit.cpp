#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    double mile = 2.80;
    double fit = 128.40;

    cout << fixed;
    cout.precision(2);

    cout << mile << " mi = " << mile * 160934.40 << endl;
    cout << fit << " ft = " << fit * 30.48 << endl;
    return 0;
}