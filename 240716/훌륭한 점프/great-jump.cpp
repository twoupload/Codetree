#include <iostream>
#include <algorithm>
#include <climits> // INT_MAX 사용

using namespace std;

const int MAX_N = 100; // 최대 돌 개수

int n;  // 돌의 개수
int k;  // 점프할 거리
int arr[MAX_N + 1]; // 각 돌에 적힌 숫자 배열 (1-based indexing)

// 주어진 최댓값 max_val 이하의 숫자만 밟아서 시작부터 끝까지 점프가 가능한지 확인하는 함수
bool isPossible(int max_val) {
    int prevIndex = 0; // 이전에 선택된 돌의 인덱스, 초기값을 0으로 설정

    for (int i = 1; i <= n; i++) {
        if (arr[i] <= max_val) {
            if (prevIndex != 0 && i - prevIndex > k) { // 이전 돌과의 거리가 k를 초과하는 경우
                return false;
            }
            prevIndex = i; // 현재 돌을 선택
        }
    }

    return prevIndex == n; // 마지막 돌에 도달했는지 확인
}

int main() {
    cin >> n >> k; // 돌의 개수와 점프 거리 입력

    for (int i = 1; i <= n; i++) {
        cin >> arr[i]; // 각 돌에 적힌 숫자 입력
    }

    int left = *min_element(arr + 1, arr + n + 1); // 돌에 있는 숫자 중 최솟값
    int right = *max_element(arr + 1, arr + n + 1); // 돌에 있는 숫자 중 최댓값
    int maximin = right; // 최악의 경우 최댓값을 선택해야 함

    while (left <= right) {
        int mid = (left + right) / 2;
        if (isPossible(mid)) {
            maximin = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    // 모든 돌의 값이 동일한 경우 예외 처리
    if (maximin == left && !isPossible(maximin)) {
        maximin = -1; // 불가능한 경우 -1 출력
    }

    cout << maximin << endl;
    return 0;
}