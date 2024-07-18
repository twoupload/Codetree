#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;

    vector<int> v;
    int arr[1234567] = {};

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int idx = *max_element(v.begin(), v.end());
    for(int i = 0; i <= n - 1; i++) {
        for(int j = i + 1; j <= n; j++) {
            if(v[i] == v[j]) {
                if(j - i <= k) {
                    arr[v[i]] += 1;
                }
            }
        }
    }

    int maxx = arr[0];
    int maxIdx = 0;
    for(int i = 0; i <= idx; i++) {
        if(arr[i] >= maxx) {
            maxx = arr[i];
            maxIdx = i;
        }
    }

    if(maxx == 0) cout << 0;
    else cout << maxIdx;

    return 0;
}