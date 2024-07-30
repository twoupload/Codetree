#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, k;
    // n: 수의 개수, k: 최대-최소 차이의 허용 범위
    cin >> n >> k;

    vector<int> nums(n);
    // n개의 수를 입력받아 벡터에 저장
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // 수를 오름차순으로 정렬
    sort(nums.begin(), nums.end());

    // 최소 비용을 저장할 변수 초기화
    int min_cost = INT_MAX;

    // 모든 가능한 최소값을 탐색
    for (int min_value = nums[0]; min_value <= nums[n-1]; ++min_value) {
        // 현재 최소값에 k를 더해 최대값 계산
        int max_value = min_value + k;
        // 현재 비용을 초기화
        int cost = 0;

        // 각 수에 대해 변환 비용 계산
        for (int i = 0; i < n; ++i) {
            // 현재 수가 최소값보다 작은 경우
            if (nums[i] < min_value) {
                // min_value로 올리는 비용 계산
                cost += min_value - nums[i];
            }
            // 현재 수가 최대값보다 큰 경우
            else if (nums[i] > max_value) {
                // max_value로 내리는 비용 계산
                cost += nums[i] - max_value;
            }
        }

        // 계산된 비용 중 최소 비용 업데이트
        min_cost = min(min_cost, cost);
    }

    // 최종적으로 최소 비용 출력
    cout << min_cost << endl;

    return 0;
}