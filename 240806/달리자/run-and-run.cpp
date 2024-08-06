#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i]; // 각 집에 있는 초기 사람 수
    }
    for (int i = 0; i < n; ++i) {
        cin >> B[i]; // 각 집에 남아 있어야 할 사람 수
    }

    // 이동해야 할 사람 수를 계산
    vector<int> move(n, 0);
    for (int i = 0; i < n; ++i) {
        move[i] = A[i] - B[i]; // 양수는 이동해야 하는 사람 수, 음수는 받아야 할 사람 수
    }

    int totalDistance = 0;
    int surplus = 0; // 이동해야 할 사람 수의 누적

    for (int i = 0; i < n; ++i) {
        surplus += move[i];
        totalDistance += abs(surplus); // 누적 이동 거리
    }

    cout << totalDistance << endl;

    return 0;
}