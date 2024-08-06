#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, x, y;
    cin >> A >> B >> x >> y;

    // 기본적으로 A에서 B까지 직접 이동하는 거리
    int directDistance = abs(A - B);

    // A에서 x로 이동 후, x에서 y로 순간이동 후, y에서 B로 이동하는 거리
    int viaX = abs(A - x) + abs(y - B); // A -> x + 순간이동 x -> y + y -> B

    // A에서 y로 이동 후, y에서 x로 순간이동 후, x에서 B로 이동하는 거리
    int viaY = abs(A - y) + abs(x - B); // A -> y + 순간이동 y -> x + x -> B

    // 최소 이동 거리 계산
    int minDistance = min({directDistance, viaX, viaY});

    cout << minDistance << endl;

    return 0;
}