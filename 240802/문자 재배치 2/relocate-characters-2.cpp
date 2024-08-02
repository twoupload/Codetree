/// 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "";
    char c;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c;
        str = str + c;
    }

    reverse(str.begin(), str.end());

    for(int i = 0; i < n; i++) {
        cout << str[i] << " ";
    }
    return 0;
}