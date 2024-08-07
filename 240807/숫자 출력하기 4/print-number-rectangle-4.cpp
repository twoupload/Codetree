#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;

    cin >> n >> k;

    if(k == 1) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    } else if(k == 2) {
        for(int i = 1; i <= n; i++) {
            if(i % 2 != 0) {
                for(int j = 1; j <= n; j++) {
                    cout << j << " ";
                }
            } else {
                for(int j = n; j >= 1; j--) {
                    cout << j << " ";
                }
            }

            cout << endl;
        }

    } else {
        for(int i = 1; i <= n; i++) {
            int p = i;
            for(int j = 1; j <= n; j++) {
                cout << p * j << " ";
            }

            cout << endl;
        }
    }
    return 0;
}