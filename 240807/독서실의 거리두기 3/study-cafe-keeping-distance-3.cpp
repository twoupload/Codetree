#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    string seats;
    cin >> seats;

    vector<int> occupied_positions;

    // 이미 차 있는 좌석의 위치를 저장
    for (int i = 0; i < N; ++i) {
        if (seats[i] == '1') {
            occupied_positions.push_back(i);
        }
    }

    int max_distance = 0;

    // 두 사람 사이의 최대 거리를 계산
    for (int i = 1; i < occupied_positions.size(); ++i) {
        int distance = (occupied_positions[i] - occupied_positions[i - 1]) / 2;
        max_distance = max(max_distance, distance);
    }

    // 첫 번째 자리와 두 번째 자리 사이의 거리 계산
    max_distance = max(max_distance, occupied_positions[0]); // 첫 자리와 첫 사람 사이의 거리
    max_distance = max(max_distance, N - 1 - occupied_positions.back()); // 마지막 자리와 마지막 사람 사이의 거리

    // 결과 출력
    cout << max_distance << endl;

    return 0;
}