// 2
#include <bits/stdc++.h>
using namespace std;

int sum, cnt;
double avr;

int main() {
    int x,y;
    cin >> x >> y;

    if(x >= y) swap(x, y);

    for(int i = x; i <= y; i++) {
        if(i % 5 != 0) {
            sum += i;
            cnt++;
        }
    }

    avr = (double) sum / cnt;
    avr = (double) (round(avr * 10) / 10);

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avr << endl;


    return 0;
}