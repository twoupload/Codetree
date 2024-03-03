#include <bits/stdc++.h>
using namespace std;

int n, maxx = -9999;
int i,j,k;
int a[25][25];
vector<int> v;

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            int temp = 0;
            for(k = j; k <= j + 2; k++) {
                if(a[i][k] == 1) temp++;
            }
            v.push_back(temp);
        }
    }

    for(i = 0; i < v.size() - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(maxx < v[i] + v[j]) {
                maxx = v[i] + v[j];
            }
        }
    }

    cout << maxx;
    return 0;
}