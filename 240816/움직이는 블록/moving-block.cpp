#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> blocks(N);
    int totalBlocks = 0;

    // 각 위치별 블럭의 수 입력
    for (int i = 0; i < N; i++) {
        cin >> blocks[i];
        totalBlocks += blocks[i]; // 총 블럭 수 계산
    }

    // 블럭을 균등하게 나누기 위한 목표 블럭 수
    int target = totalBlocks / N;
    int moveCount = 0;

    // 목표 블럭 수를 기준으로 이동해야 할 블럭 수 계산
    for (int i = 0; i < N; i++) {
        if (blocks[i] > target) {
            moveCount += blocks[i] - target; // 목표보다 많은 블럭의 차이만큼 이동
        }
    }

    cout << moveCount << endl; // 결과 출력
    return 0;
}