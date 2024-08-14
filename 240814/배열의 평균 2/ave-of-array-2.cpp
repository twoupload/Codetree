#include <iostream>
using namespace std;

int a[3][3];

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        double sum1 = 0.0;
        for(int j = 0; j < 3; j++) {
            sum1 += a[i][j];
        }
        cout << fixed;
        cout.precision(1);

        cout << sum1 / 3 << " ";
    }

    cout << endl;

    for(int j = 0; j < 3; j++) {
        double sum2 = 0.0;
        for(int i = 0; i < 3; i++) {
            sum2 += a[i][j];
        }
        cout << fixed;
        cout.precision(1);

        cout << sum2 / 3 << " ";
    }

    cout << endl;

    double sum3 = 0.0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum3 += a[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << sum3 / 9 << endl;
    return 0;
}