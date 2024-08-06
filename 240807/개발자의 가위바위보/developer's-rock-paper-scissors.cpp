#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 승리 조건을 체크하는 함수
int countWins(const vector<pair<int, int>>& games, int rock, int scissors, int paper) {
    int wins = 0;
    for (const auto& game : games) {
        int player1 = game.first;
        int player2 = game.second;
        
        // 가위 바위 보의 승리 조건
        if ((player1 == scissors && player2 == paper) || 
            (player1 == rock && player2 == scissors) || 
            (player1 == paper && player2 == rock)) {
            wins++;
        }
    }
    return wins;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> games(N);
    for (int i = 0; i < N; ++i) {
        cin >> games[i].first >> games[i].second;
    }

    int maxWins = 0;

    // 1, 2, 3을 각각 가위, 바위, 보로 매칭하는 모든 경우를 확인
    for (int rock = 1; rock <= 3; ++rock) {
        for (int scissors = 1; scissors <= 3; ++scissors) {
            if (scissors == rock) continue; // 같은 숫자 사용 불가
            for (int paper = 1; paper <= 3; ++paper) {
                if (paper == rock || paper == scissors) continue; // 같은 숫자 사용 불가
                
                // 승리 조건 확인
                maxWins = max(maxWins, countWins(games, rock, scissors, paper));
            }
        }
    }

    cout << maxWins << endl;

    return 0;
}