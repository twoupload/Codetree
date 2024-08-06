#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<size_t> poses(3); // 3명의 위치를 저장할 벡터

    // 위치 입력 받기
    for (int i = 0; i < 3; i++) {
        cin >> poses[i];
    }

    // 두 위치 간의 차이 계산
    size_t diff1 = poses[1] - poses[0];
    size_t diff2 = poses[2] - poses[1];

    // 최대 차이에서 1을 빼고 출력
    cout << max(diff1, diff2) - 1 << endl;

    return 0;
}