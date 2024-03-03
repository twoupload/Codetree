#include <iostream>
using namespace std;

int n,cnt;
string s;

int main() {
    cin >> n;
    cin >> s;

    for(int i = 0; i < n - 2; i++) {
        if(s[i] == 'C') {
            for(int j = i; j < n - 1; j++) {
                if(s[j] == 'O') {
                    for(int k = j; k < n; k++) {
                        if(s[k] == 'W') {
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    cout << cnt;
    return 0;
}