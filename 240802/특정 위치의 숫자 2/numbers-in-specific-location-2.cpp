/// 2
#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main() {
    int n, sum = 0;
    double avr = 0.0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) sum += arr[i];
    } 

    avr = (double)sum / (n / 2);
    avr = (double)(round(avr * 10) / 10);

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avr;

    return 0;
}