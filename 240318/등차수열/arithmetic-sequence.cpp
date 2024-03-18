#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int maxCount = 0;

    // 각 가능한 k에 대해 등차수열을 이루는 횟수를 저장할 해시맵
    unordered_map<int, int> countMap;

    // 가능한 모든 쌍에 대해 반복
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            // k를 계산 (두 숫자의 평균)
            int k = (nums[i] + nums[j]) / 2;
            
            // nums[i]와 nums[j]가 k를 중심으로 대칭이라면, 즉 등차수열을 이룬다면
            if((nums[i] + nums[j]) % 2 == 0 && (nums[i] - k) == (k - nums[j])) {
                // 해당 k에 대한 카운트를 1 증가
                countMap[k]++;
                // 최대 횟수 갱신
                maxCount = max(maxCount, countMap[k]);
            }
        }
    }

    cout << maxCount << endl;

    return 0;
}