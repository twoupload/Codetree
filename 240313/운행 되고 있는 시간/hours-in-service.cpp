#include <bits/stdc++.h>
using namespace std;

int n, i, j;
int x, y, totalX, totalY;
int maxx = INT_MIN;

struct S {
    int start, end;
};

S s[101];

int main() {
    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> x >> y;
        s[i].start = x, s[i].end = y;
        totalX += x, totalY += y;
    }

    for(i = 0; i < n; i++) {
       int nowX, nowY, runningTIme;
       nowX = totalX - s[i].start, nowY = totalY - s[i].end;

       runningTIme = nowY - nowX;

       maxx = max(maxx, runningTIme);
    }

    cout << maxx - 1;
    return 0;
}