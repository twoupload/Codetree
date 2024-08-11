// 1
#include <iostream>
using namespace std;

int n[5][5];

int main() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> n[i][j];
        }
    }

    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += n[i][j];
        }

        n[i][4] = sum;
    }

    for(int i = 0; i < 5; i++) {
        cout << n[i][4] << endl;
    }
    return 0;
}