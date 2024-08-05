/// 3
#include <iostream>
using namespace std;

int n, gesu, sum, su;
double avr;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> su;
        if(su % 7 == 0) {
            sum += su;
            gesu++;
        }
    }

    avr = (double) sum / gesu;

    cout << fixed;
    cout.precision(1);

    cout << gesu << " " << sum << " " << avr << endl;
    return 0;
}