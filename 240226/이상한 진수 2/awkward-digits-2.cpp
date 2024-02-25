#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '0') {
            a[i] = '1';
            break;
        }
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