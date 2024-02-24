#include <iostream>
using namespace std;

int a[25][25], n, i, j, k, cnt, maxx = -9999;

int main() {
    cin >> n;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j + 2 <= n; j++) {
            cnt = 0;
            for(k = j; k <= j + 2; k++) {
                if(a[i][k] == 1) cnt++;
            }

            if(maxx < cnt) {
                maxx = cnt;
            }
        }
    }

    cout << maxx;
    return 0;
}