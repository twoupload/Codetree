#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;

// 주어진 배열을 m개의 구간으로 나누었을 때 최대 구간 합을 최소화하는 함수
int getMaxSum(const vector<int>& nums, int m) {
    // 1. 초기 설정
    int left = *max_element(nums.begin(), nums.end());  // 최소 가능한 최대 구간 합 (배열의 최댓값)
    int right = accumulate(nums.begin(), nums.end(), 0); // 최대 가능한 최대 구간 합 (배열의 총합)

    // 2. 이진 탐색으로 최적의 최대 구간 합 찾기
    while (left < right) { // left와 right가 같아질 때까지 탐색
        int mid = left + (right - left) / 2; // 중간값 계산 (오버플로 방지)
        int sum = 0; // 현재 구간의 합
        int count = 1; // 구간 개수

        // 3. mid를 기준으로 구간 나누기
        for (int num : nums) { // 배열의 각 숫자를 순회
            sum += num; // 현재 구간에 숫자 더하기
            if (sum > mid) { // 구간 합이 mid를 초과하면
                sum = num;   // 새로운 구간 시작
                count++;     // 구간 개수 증가
            }
        }

        // 4. 구간 개수에 따라 탐색 범위 조절
        if (count <= m) { 
            right = mid;     // m개 이하의 구간으로 나눌 수 있으므로 최대 구간 합을 줄여서 탐색
        } else {
            left = mid + 1; // m개보다 많은 구간이 필요하므로 최대 구간 합을 늘려서 탐색
        }
    }

    // 5. 최적의 최대 구간 합 반환
    return left; // left는 최적의 최대 구간 합을 나타냄
}

int main() {
    int n, m;  // n: 배열의 크기, m: 구간의 개수
    cin >> n >> m;

    vector<int> nums(n); // 숫자 배열
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // 숫자 입력
    }

    int result = getMaxSum(nums, m); // 최적의 최대 구간 합 계산
    cout << result << endl; // 결과 출력

    return 0;
}