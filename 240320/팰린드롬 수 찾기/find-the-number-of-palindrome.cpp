#include <bits/stdc++.h>
#define MAX 1234567
using namespace std;

int a[MAX];
int x, y, cnt;

bool pell(string num) {
    int len = num.size();

    for(int i = 0; i < len; i++) {
        if(num[i] != num[len - i - 1]) return false;
    }
    return true;
}

int main() {
    cin >> x >> y;

    for(int i = x; i <= y; i++) {
        string n = to_string(i);
        if(pell(n)) cnt++;
    }

    cout << cnt;
    return 0;
}