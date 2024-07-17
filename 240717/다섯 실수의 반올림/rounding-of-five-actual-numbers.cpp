#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    double n;

    cout << fixed;
    cout.precision(3);
    for(int i = 0; i < 5; i++) {
        cin >> n;
        cout << n << endl;
    }
    return 0;
}