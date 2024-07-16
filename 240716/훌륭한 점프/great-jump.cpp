#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_NUM 100

using namespace std;

int n, k;
int arr[MAX_N];

bool IsPossible(int limit) {
    // 마지막 index로 부터
    // 숫자 limit을 넘지 않으면서
    // 거리 k이내로 계속 이동이 가능한지를 판단합니다.
    int last_idx = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] <= limit) {
            if(i - last_idx > k)
                return false;
            last_idx = i;
        }
    }
    
    return true;
}

int main() {
    // 입력:
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // 밟으며 지나간 최댓값을 i라고 가정했을 때
    // 거리 k 이내로 점프하며 끝까지 도달하는 것이
    // 가능한지를 살펴봅니다.
    // 가능하다면, 그때의 i가 최솟값이므로
    // 답을 출력하고 종료합니다.
    for(int i = max(arr[0], arr[n - 1]); i <= MAX_NUM; i++)
        if(IsPossible(i)) {
            cout << i;
            break;
        }
    return 0;
}