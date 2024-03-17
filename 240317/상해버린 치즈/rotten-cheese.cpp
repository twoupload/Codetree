#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, D, S;
    cin >> N >> M >> D >> S;

    vector<vector<pair<int, int>>> cheeseLogs(M + 1); // 치즈별로 먹은 사람과 시간을 저장
    while (D--) {
        int p, m, t;
        cin >> p >> m >> t;
        cheeseLogs[m].push_back({p, t});
    }

    vector<pair<int, int>> sickTimes; // 아픈 사람과 그 시간을 저장
    while (S--) {
        int p, t;
        cin >> p >> t;
        sickTimes.push_back({p, t});
    }

    int maxNeeded = 0; // 필요한 약의 최대 개수

    for (int m = 1; m <= M; ++m) {
        bool possible = true;
        int count = 0;
        vector<bool> eaten(N + 1, false); // 해당 사람이 치즈를 먹었는지 여부

        for (auto &log : cheeseLogs[m]) { // 해당 치즈를 먹은 모든 기록 확인
            for (auto &sick : sickTimes) { // 모든 아픈 사람의 기록 확인
                if (log.first == sick.first && log.second >= sick.second) {
                    // 아픈 사람이 해당 치즈를 먹었지만, 아프기 전에 먹지 않았다면 이 치즈는 상한 치즈가 아님
                    possible = false;
                    break;
                }
            }
            if (!possible) break;
            if (!eaten[log.first]) { // 이 사람이 치즈를 먹었다면
                eaten[log.first] = true;
                count++; // 치즈를 먹은 사람 수 증가
            }
        }

        if (possible) {
            maxNeeded = max(maxNeeded, count); // 가능한 상한 치즈라면, 필요한 약의 최대 개수 업데이트
        }
    }

    cout << maxNeeded << endl; // 필요한 약의 최대 개수 출력

    return 0;
}