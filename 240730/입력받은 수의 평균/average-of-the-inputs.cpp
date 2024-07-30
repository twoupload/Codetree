// 5
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int nn;
        cin >> nn;

        sum += nn;
    }

    double avr = 0.0;
    avr = (double)sum / n;
    avr = round(avr * 10) / 10;

    if(avr >= 70.0) cout << avr << endl;
    else {
        cout << avr << endl;
        cout << "fail" << endl;
    }
    return 0;
}