#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 위치를 정렬합니다.
    int positions[3] = {a, b, c};
    sort(positions, positions + 3);

    // 최소 이동 횟수 계산
    int min_moves = 0;

    // 세 사람의 위치 차이를 계산
    int gap1 = positions[1] - positions[0]; // 첫 번째와 두 번째 사이의 간격
    int gap2 = positions[2] - positions[1]; // 두 번째와 세 번째 사이의 간격

    // 두 간격을 확인하여 최소 이동 횟수 결정
    if (gap1 == 1 && gap2 == 1) {
        min_moves = 0; // 이미 연속된 경우
    } else if (gap1 <= 2 || gap2 <= 2) {
        min_moves = 1; // 한 칸 떨어진 경우
    } else {
        min_moves = 2; // 두 칸 떨어진 경우
    }

    // 최대 이동 횟수 계산
    // 최대 이동은 항상 2일 수 없으므로, 아래와 같이 수정
    int max_moves = 0;
    if (gap1 > 1 && gap2 > 1) {
        max_moves = 2; // 두 칸 떨어진 경우
    } else if (gap1 > 1 || gap2 > 1) {
        max_moves = 1; // 한 칸 떨어진 경우
    }

    cout << min_moves << endl;
    cout << max_moves << endl;

    return 0;
}