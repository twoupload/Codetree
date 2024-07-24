#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int sum = 0;
    int step = 0;
    double avr = 0.0;

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;

        if(k < 100) {
            sum += k;
            step += 1;
        }

        else {
            sum += k;
            step += 1;
            break;
        }
    }
    cout << fixed;
    cout.precision(1);

    avr = (double)sum / step;

    cout << sum << endl;
    cout << avr << endl;
    return 0;
}