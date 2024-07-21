#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int findMaxH(vector<int>& nums, int L) {
    int N = nums.size();

    // 중복 제거 및 정렬
    unordered_set<int> uniqueNums(nums.begin(), nums.end());
    nums.assign(uniqueNums.begin(), uniqueNums.end());
    sort(nums.begin(), nums.end());

    int maxH = 0;
    for (int h = 1; h <= 100; ++h) {
        int count = 0;
        int upgradesLeft = L;

        for (int num : nums) {
            if (num < h && upgradesLeft > 0) {
                ++num; 
                --upgradesLeft;
            }
            if (num >= h) {
                ++count;
            }
        }

        if (count >= h) {
            maxH = h;
        }
    }

    return maxH;
}

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    int maxH = findMaxH(nums, L);
    cout << maxH << endl;

    return 0;
}