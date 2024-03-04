#include <bits/stdc++.h>
using namespace std;

int n, k, maxx = -123456789;
int a[1001];

vector<int> v;

int main() {
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n - k + 1; i++) {
        int cnt = 0;
        for(int j = i; j <= i + k - 1; j++) {
            cnt += a[j];
        }
        v.push_back(cnt);
    }

    for(int i = 0; i < v.size(); i++) {
        if(maxx < v[i]) {
            maxx = v[i];
        }
    }

    cout << maxx;
    
    return 0;
}