#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;

        if(c >= '0' && c <= '9') cout << (int) c << endl;
        else cout << c << endl;
    }
    return 0;
}