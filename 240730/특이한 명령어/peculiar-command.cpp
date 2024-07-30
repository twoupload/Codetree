// 2
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;


    cout << fixed;
    cout.precision(1);

    for(int i = 0; i < n; i++) {
        int a, b;
        char c;

        cin >> a >> b >> c;

        if(c == 's') {
            cout << a * b << endl;
        } else if(c == 't') {
            cout << ((double)a * b / 2) << endl;
        } else {
            continue;
        }
    }

    return 0;
}