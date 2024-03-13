#include <bits/stdc++.h>
using namespace std;

int n, k;

struct BOMB {
    int num, dis;
};

BOMB bomb[100];

bool isRange(int i, int j) {
    return abs(bomb[i].dis - bomb[j].dis) <= n;
}

int main() {
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> bomb[i].num;
        bomb[i].dis = i;
    }

    int maxx = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(bomb[i].num == bomb[j].num && isRange(i, j)) {
                maxx = max(maxx, bomb[i].num);
            }
        }
    }

    if(maxx == INT_MIN) cout << -1;
    else {
        cout << maxx;
    }
    return 0;
}