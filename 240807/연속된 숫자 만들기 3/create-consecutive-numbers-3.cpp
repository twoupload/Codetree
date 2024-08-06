#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 연속된 숫자로 만들기 위해 필요한 최대 이동 횟수 계산
    int maxMoves = (c - a - 2);

    // 이동 횟수는 음수가 되지 않으므로 0 이상의 값으로 설정
    if (maxMoves < 0) {
        maxMoves = 0;
    }

    cout << maxMoves << endl;

    return 0;
}