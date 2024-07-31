/// 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 0, sum = 0, cnt = 0;
    double avr = 0.0;

    cin >> num;

    for(int i = 185; i <= num * 10; i++) {
        sum += i;
        cnt++;
    }

    cout << fixed;
    cout.precision(1);

    avr = (double) sum / cnt;
    avr = (double)(round(avr * 10) / 10);

    cout << sum << " " << avr << endl;
    

    return 0;
}