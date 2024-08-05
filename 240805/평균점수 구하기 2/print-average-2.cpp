/// 1
#include <iostream>
using namespace std;

int n;
double s, avr, sum;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;
        sum += s;
    }

    avr = sum / n;

    cout << fixed;
    cout.precision(1);

    cout << avr;
    return 0;
}