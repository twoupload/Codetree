#include <bits/stdc++.h>
using namespace std;

int n, maxx = -1;
vector<int> a;

bool isCarry(int x, int y, int z) {
    string sx = to_string(x), sy = to_string(y), sz = to_string(z);
    while(sx.size() < 5) sx = '0' + sx;
    while(sy.size() < 5) sy = '0' + sy;
    while(sz.size() < 5) sz = '0' + sz;
    for(int i = 0; i < 5; i++) {
        int nx = sx[i] - '0', ny = sy[i] - '0', nz = sz[i] - '0';
        if(nx + ny + nz >= 10) return false;
    }
    return true;
}

int main() {
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(isCarry(a[i], a[j], a[k])) {
                    maxx = max(maxx, a[i] + a[j] + a[k]);
                }
            }
        }
    }

    cout << maxx << '\n';
    return 0;
}