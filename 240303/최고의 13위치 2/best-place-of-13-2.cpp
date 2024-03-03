#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max_cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            for(int k = 0; k < n; k++) {
                for(int l = 0; l < n - 2; l++) {
                    if(i == k && abs(j - l) <= 2) {
                        continue;
                    }

                    int cnt1 = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                    int cnt2 = arr[k][l] + arr[k][l + 1] + arr[k][l + 2];
                    max_cnt = max(max_cnt, cnt1 + cnt2);
                }
            }
        }
    }

    cout << max_cnt;
    return 0;
}