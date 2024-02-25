#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    int sw = 0;
    cin >> a;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '0') {
            a[i] = '1';
            sw = 1;
            break;
        }
    }

    if(sw == 0) {
        a[a.size() - 1] = '0';
    }
    
    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '1') {
            cnt += pow(2, a.size() - 1 - i);
        }
    }

    cout << cnt;
    return 0;
}