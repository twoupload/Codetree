#include <bits/stdc++.h>
using namespace std;

// 전역 변수 선언
int minDiff = INT_MAX; // 최소 차이를 저장할 변수

// 6명의 개발자 능력치를 입력받아 모든 팀 조합을 고려하여 최소 차이를 계산하는 함수
void calculateMinDiff(vector<int>& abilities) {
    sort(abilities.begin(), abilities.end()); // 능력치를 오름차순으로 정렬

    do {
        // 현재 순열에 따른 팀의 능력치 합 계산
        int team1 = abilities[0] + abilities[5]; // 가장 작은 값과 가장 큰 값
        int team2 = abilities[1] + abilities[4]; // 두 번째로 작은 값과 두 번째로 큰 값
        int team3 = abilities[2] + abilities[3]; // 중간 값끼리
        
        // 세 팀 중 최대값과 최소값 찾기
        int maxTeam = max({team1, team2, team3});
        int minTeam = min({team1, team2, team3});
        
        // 최대 팀과 최소 팀 간의 차이를 계산하여 현재까지의 최소 차이와 비교
        minDiff = min(minDiff, maxTeam - minTeam);
    } while (next_permutation(abilities.begin(), abilities.end())); // 모든 순열에 대해 반복
}

int main() {
    vector<int> abilities(6); // 6명의 개발자 능력치 저장할 벡터
    for (int& ability : abilities) {
        cin >> ability; // 능력치 입력받기
    }

    calculateMinDiff(abilities); // 최소 차이 계산 함수 호출

    cout << minDiff; // 최소 차이 출력
    return 0;
}