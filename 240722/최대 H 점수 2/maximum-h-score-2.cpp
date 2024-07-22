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

        // 숫자 변경 전략 수정: h - 1 값을 우선적으로 변경
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == h - 1 && upgradesLeft > 0) {
                ++nums[i];
                --upgradesLeft;
            }
            if (nums[i] >= h) {
                ++count;
            }
        }

        // 남은 변경 횟수를 사용하여 최대한 h 이상의 값 만들기
        for (int i = 0; i < nums.size() && upgradesLeft > 0; ++i) {
            if (nums[i] < h) {
                ++nums[i];
                --upgradesLeft;
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