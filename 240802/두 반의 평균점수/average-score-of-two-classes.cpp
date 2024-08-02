// 1
#include <bits/stdc++.h>
using namespace std;

int arr[11];

int main() {
    int n, a, b, sum = 0;
    double avr = 0.0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> a >> b;

    sum = arr[a - 1] + arr[b - 1];
    avr = (double) sum / 2;
    avr = (double)(round(avr * 10) / 10);

    cout << fixed;
    cout.precision(1);

    cout << avr;

    return 0;
}