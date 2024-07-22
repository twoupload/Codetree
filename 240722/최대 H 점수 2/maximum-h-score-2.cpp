#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int h = n; h >= 0; h--) {
        int lCnt = 0, hCnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= h) {
                hCnt++;
            } else if (nums[i] == h - 1) {
                hCnt++;
                lCnt++;
            }
        }

        if (hCnt >= h && (lCnt - (hCnt - h)) <= l) {
            cout << h << endl;
            break;
        }
    }

    return 0;
}