#include <iostream>
using namespace std;

int a[101];
int n, ai, cnt;
int i, j, k;

bool isValue(int x, int y, int z) {
    return x < y && y < z;
}

bool isIndex(int x, int y, int z) {
    return x <= y && y <= z;
}

int main() {
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(i = 1; i <= n; i++) {
        for(j = i + 1; j <= n; j++) {
            for(k = j + 1; k <= n; k++) {
                if(isValue(a[i],a[j],a[k])) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}