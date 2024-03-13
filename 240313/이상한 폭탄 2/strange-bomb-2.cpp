#include <bits/stdc++.h>
using namespace std;

int n, k;
int bomb[100];

int main() {
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> bomb[i];
    }

    int maxx = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(bomb[i] == bomb[j] && abs(i-j) <= k) {
                maxx = max(maxx, bomb[i]);
            }
        }
    }

    cout << maxx;
    return 0;
}