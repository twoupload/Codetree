#include <bits/stdc++.h>
using namespace std;

int adding(int num) {
    int cnt = 0;

    while(num >= 10) {
        cnt = num % 10;
        num = num / 10;
    }

    cnt += num;
    
    return cnt;
}

int main() {
    int x, y;

    cin >> x >> y;

    int maxx = INT_MIN;
    for(int i = x; i <= y; i++) {
        maxx = max(maxx, adding(i));
    }

    cout << maxx;
    return 0;
}