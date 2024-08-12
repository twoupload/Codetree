#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int scoreA = 0, scoreB = 0;
    int changes = 0;
    string currentHallOfFame = "A B"; // 초기 명예의 전당 상태

    for (int i = 0; i < n; i++) {
        char student;
        int scoreChange;
        cin >> student >> scoreChange;

        // 점수 업데이트
        if (student == 'A') {
            scoreA += scoreChange;
        } else if (student == 'B') {
            scoreB += scoreChange;
        }

        // 현재 최고 점수
        int maxScore = max(scoreA, scoreB);
        string newHallOfFame;

        // 명예의 전당 결정
        if (scoreA == maxScore && scoreB == maxScore) {
            newHallOfFame = "A B";
        } else if (scoreA == maxScore) {
            newHallOfFame = "A";
        } else if (scoreB == maxScore) {
            newHallOfFame = "B";
        }

        // 명예의 전당 상태가 변경되었는지 확인
        if (newHallOfFame != currentHallOfFame) {
            changes++;
            currentHallOfFame = newHallOfFame; // 상태 업데이트
        }
    }

    cout << changes << endl; // 결과 출력
    return 0;
}