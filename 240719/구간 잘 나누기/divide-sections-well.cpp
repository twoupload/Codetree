#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // accumulate 함수를 위해 추가

using namespace std;

// 주어진 배열을 m개의 구간으로 나누었을 때 최대 구간 합을 반환하는 함수
int getMaxSum(const vector<int>& nums, int m) {
    int left = *max_element(nums.begin(), nums.end()); // 최소 구간 합 (배열 최댓값)
    int right = accumulate(nums.begin(), nums.end(), 0); // 최대 구간 합 (배열 총합)

    // 이진 탐색으로 최적의 최대 구간 합 탐색
    while (left < right) { // left == right가 될 때까지 반복
        int mid = left + (right - left) / 2; // 중간값 계산 (오버플로 방지)
        int sum = 0, count = 1;

        // mid를 기준으로 구간 나누기
        for (int num : nums) {
            sum += num;
            if (sum > mid) {
                sum = num; // 새로운 구간 시작
                count++;
            }
        }

        // 구간 개수에 따라 탐색 범위 조절
        if (count <= m) {
            right = mid; // mid 이하 값으로 탐색
        } else {
            left = mid + 1; // mid 초과 값으로 탐색
        }
    }

    return left; // 최적의 최대 구간 합 반환
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = getMaxSum(nums, m);
    cout << result << endl;

    return 0;
}