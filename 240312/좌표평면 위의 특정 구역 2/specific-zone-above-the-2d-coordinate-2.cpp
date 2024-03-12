#include <bits/stdc++.h>
#define MAXX INT_MAX
#define MINN INT_MIN

using namespace std;

int n;
int minArr = MAXX;

struct F {
    int x, y;
};

F f[40001];

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> f[i].x >> f[i].y;
    }

    for(int i = 1; i <= n; i++) {
        int minX = MAXX, minY = MAXX, maxX = MINN, maxY = MINN;
        for(int j = 1; j <= n; j++) {
            if(j == i) continue;
            minX = min(minX, f[j].x);
            minY = min(minY, f[j].y);
            maxX = max(maxX, f[j].x);
            maxY = max(maxY, f[j].y);
        }

        int area = (maxX - minX) * (maxY - minY);
        minArr = min(minArr, area);
    }

    cout << minArr;
    return 0;
}