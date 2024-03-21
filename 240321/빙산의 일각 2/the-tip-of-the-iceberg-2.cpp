#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 빙산 덩어리 개수를 계산하는 함수
int countIcebergGroups(const vector<int>& heights, int waterLevel) {
    int count = 0;
    bool isPreviousSubmerged = true; // 이전 빙산이 잠겼는지 여부

    for (int height : heights) {
        if (height > waterLevel) {
            // 현재 빙산이 물 위에 있는 경우
            if (isPreviousSubmerged) {
                // 이전 빙산이 잠겼었다면 새로운 덩어리 시작
                count++;
                isPreviousSubmerged = false;
            }
        } else {
            // 현재 빙산이 잠긴 경우
            isPreviousSubmerged = true;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int maxGroups = 0;
    // 가능한 모든 해수면 높이에 대해 검사
    for (int waterLevel = 1; waterLevel <= 1000; waterLevel++) {
        int groups = countIcebergGroups(heights, waterLevel);
        maxGroups = max(maxGroups, groups);
    }

    cout << maxGroups << endl;

    return 0;
}