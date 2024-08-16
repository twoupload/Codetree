#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 각 학생의 점수를 저장할 배열
    int scores[3] = {0, 0, 0}; // A, B, C의 점수
    // 명예의 전당에 올라간 학생들의 조합을 저장할 집합
    set<char> hallOfFame;
    hallOfFame.insert('A'); // 초기 상태: 모두 명예의 전당에 있음
    hallOfFame.insert('B');
    hallOfFame.insert('C');

    int changes = 0; // 조합 변경 횟수
    vector<pair<char, int>> updates(n); // 점수 변동 정보를 저장할 벡터

    // 점수 변동 정보 입력
    for (int i = 0; i < n; i++) {
        cin >> updates[i].first >> updates[i].second;
    }

    // 점수 변동 처리
    for (const auto& update : updates) {
        char student = update.first; // 점수를 업데이트할 학생
        int scoreChange = update.second; // 점수 변동

        // 점수 업데이트
        if (student == 'A') scores[0] += scoreChange;
        else if (student == 'B') scores[1] += scoreChange;
        else if (student == 'C') scores[2] += scoreChange;

        // 현재 최고 점수 찾기
        int maxScore = max({scores[0], scores[1], scores[2]});

        // 현재 명예의 전당에 올라간 학생들
        set<char> currentHallOfFame;

        if (scores[0] == maxScore) currentHallOfFame.insert('A');
        if (scores[1] == maxScore) currentHallOfFame.insert('B');
        if (scores[2] == maxScore) currentHallOfFame.insert('C');

        // 조합이 변경되었는지 확인
        if (currentHallOfFame != hallOfFame) {
            changes++; // 변경 횟수 증가
            hallOfFame = currentHallOfFame; // 현재 상태로 업데이트
        }
    }

    // 결과 출력
    cout << changes << endl;

    return 0;
}