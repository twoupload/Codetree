#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    if(s.size() > n) {
        for(int i = 0; i < n; i++) {
            cout << s[i];
        }
    } else {
        cout << s << endl;
    }
    return 0;
}