#include <bits/stdc++.h>
using namespace std;

int a[5];
int ans = INT_MAX;

// 모든 팀의 능력치가 서로 다른 것을 확인하는 함수
bool isSame(int n1, int n2, int n3) {
    return n1 != n2 && n2 != n3 && n1 != n3;
}

void check() {
    int totalSum = accumulate(a, a+5, 0); // 전체 합계를 구합니다.
    for(int i = 0; i < 5; i++) {
        for(int j = i+1; j < 5; j++) {
            for(int k = 0; k < 5; k++) {
                if(k == i || k == j) continue;
                for(int l = k+1; l < 5; l++) {
                    if(l == i || l == j) continue;
                    int team1 = a[i] + a[j];
                    int team2 = a[k] + a[l];
                    int team3 = totalSum - (team1 + team2);
                    if(isSame(team1, team2, team3)) {
                        int maxTeam = max({team1, team2, team3});
                        int minTeam = min({team1, team2, team3});
                        ans = min(ans, maxTeam - minTeam);
                    }
                }
            }
        }
    }
}

int main() {
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    check();

    if(ans == INT_MAX) cout << -1;
    else cout << ans;
    return 0;
}