// 4
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        reverse(str.begin(), str.end());

        cout << str << endl;
    }
    return 0;
}