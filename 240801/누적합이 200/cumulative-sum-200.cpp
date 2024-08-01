// 1
#include <iostream>
#include <cmath>
using namespace std;

int n, sum, nn;
double avr; 

int main() {
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> nn;
        sum += nn;
        cnt++;

        if(sum > 200) {break;}
    }

    cout << fixed;
    cout.precision(1);

    avr = (double) sum / cnt;
    avr = (double) (round(avr * 10) / 10);
    cout << sum << endl;
    cout << avr << endl;

    return 0;
}