#include <iostream>
using namespace std;

int a[4][2];
int b[4][2];
int c[4][2];

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            int num;
            cin >> num;
            a[i][j] = num;
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            int num;
            cin >> num;
            b[i][j] = num;
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            int sum;
            sum = a[i][j] * b[i][j];
            c[i][j] = sum;
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}