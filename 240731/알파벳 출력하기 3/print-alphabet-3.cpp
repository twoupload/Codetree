// 5
#include <iostream>
using namespace std;

char alp = 'A';

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = n - i; j > 0; j--) {
            cout << char(alp + cnt);
            cnt++;
        }
        cout << endl;
    }
    return 0;
}