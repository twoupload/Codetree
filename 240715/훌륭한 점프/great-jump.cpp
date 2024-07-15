#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 주어진 최댓값으로 목표 지점에 도달할 수 있는지 확인하는 함수
bool isPossible(int maxVal, const vector<int>& stones, int k) {
    int currentPos = 0; // 현재 위치

    while (currentPos < stones.size() - 1) {
        int nextPos = currentPos + 1; // 다음 위치 후보

        // 최대 k 거리 안에서 maxVal 이하인 돌을 찾음
        while (nextPos <= currentPos + k && nextPos < stones.size() && stones[nextPos] > maxVal) {
            nextPos++;
        }

        // maxVal 이하인 돌을 찾지 못하면 불가능
        if (nextPos == currentPos + 1) {
            return false;
        }

        currentPos = nextPos; // 다음 위치로 이동
    }

    return true; // 목표 지점에 도달 가능
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> stones(n);
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }

    int left = 1, right = *max_element(stones.begin(), stones.end()); // 탐색 범위 설정
    int result = right; // 최악의 경우 최댓값은 가장 큰 돌의 값

    // 이분 탐색으로 최적의 최댓값 찾기
    while (left <= right) {
        int mid = (left + right) / 2;

        if (isPossible(mid, stones, k)) {
            result = mid; // 더 작은 최댓값으로 갱신
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result - 1 << endl; // 최적의 최댓값 출력

    return 0;
}