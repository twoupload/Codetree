// 2
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double right, left;
    cin >> right >> left;

    if(right >= 1.0 && left >= 1.0) cout << 'H' << endl;
    else if((right >= 0.5 && right < 1.0) || (left >= 0.5 && left < 1.0)) cout << 'M' << endl;
    else cout << 'L' << endl;
    return 0;
}