#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int min_cost = INT_MAX;

    // 모든 가능한 최소값을 탐색
    for (int min_value = nums[0]; min_value <= nums[n-1]; ++min_value) {
        int max_value = min_value + k;
        int cost = 0;

        // 비용 계산
        for (int i = 0; i < n; ++i) {
            if (nums[i] < min_value) {
                cost += min_value - nums[i]; // min_value로 올리기
            } else if (nums[i] > max_value) {
                cost += nums[i] - max_value; // max_value로 내리기
            }
        }

        min_cost = min(min_cost, cost);
    }

    cout << min_cost << endl;

    return 0;
}