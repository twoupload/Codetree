#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 위치를 정렬하여 a, b, c를 오름차순으로 배치
    int positions[3] = {a, b, c};
    sort(positions, positions + 3);

    // 연속된 숫자가 되기 위해 필요한 이동 횟수 계산
    int moves = 0;

    // 첫 번째 사람 위치
    int first = positions[0];
    int second = positions[1];
    int third = positions[2];

    // 첫 번째와 두 번째 사람의 간격과 두 번째와 세 번째 사람의 간격을 계산
    if (second - first > 1) {
        moves += (second - first - 1); // 첫 번째와 두 번째 사이의 빈 공간 수
    }
    if (third - second > 1) {
        moves += (third - second - 1); // 두 번째와 세 번째 사이의 빈 공간 수
    }

    cout << moves << endl;

    return 0;
}