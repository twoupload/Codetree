#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int maxVal = (C / B) * B; // B로 C를 최대한 채운 값
    int remainder = C % B; // B로 채운 후 남은 값

    // 남은 값에 A를 최대한 더하기
    while (maxVal + A <= C) {
        maxVal += A;
    }

    cout << maxVal << endl;

    return 0;
}