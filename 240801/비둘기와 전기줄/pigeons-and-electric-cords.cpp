#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // 비둘기의 위치를 저장할 맵
    map<int, vector<int>> pigeon_positions;

    // 입력 받기
    for (int i = 0; i < N; ++i) {
        int pigeon_number, position;
        cin >> pigeon_number >> position;
        pigeon_positions[pigeon_number].push_back(position);
    }

    int total_crossings = 0;

    // 각 비둘기별로 도로를 건넌 횟수 계산
    for (const auto& entry : pigeon_positions) {
        const vector<int>& positions = entry.second;
        int crossings = 0;

        // 이전 위치
        int previous_position = positions[0];

        // 비둘기의 위치를 순회하면서 건넌 횟수 계산
        for (int j = 1; j < positions.size(); ++j) {
            if (positions[j] != previous_position) {
                crossings++; // 위치가 바뀌면 건넌 것으로 간주
                previous_position = positions[j]; // 이전 위치 업데이트
            }
        }

        total_crossings += crossings; // 총 건넌 횟수에 추가
    }

    // 결과 출력
    cout << total_crossings << endl;

    return 0;
}