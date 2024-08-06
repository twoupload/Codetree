#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 연속된 숫자로 만들기 위해 필요한 이동 횟수 계산
    int maxMoves = 0;

    // 세 사람의 위치를 연속된 숫자로 만들기 위해
    // c - a + 1 - 3 (3은 연속된 숫자의 개수)
    maxMoves = (c - a + 1) - 3;

    // 이동 횟수는 음수가 되지 않으므로 0 이상의 값으로 설정
    if (maxMoves < 0) {
        maxMoves = 0;
    }

    cout << maxMoves << endl;

    return 0;
}