// 2
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double right, left;
    cin >> right >> left;

    double idx = 0.0;

    if(right <= left) idx = right;
    else idx = left;

    if(idx >= 1.0) cout << 'H' << endl;
    else if(idx >= 0.5 && idx < 1.0) cout << 'M' << endl;
    else cout << 'L' << endl;

    return 0;
}