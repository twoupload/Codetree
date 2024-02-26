#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX_N 100
#define INF 1e9

using namespace std;

int x[MAX_N], y[MAX_N];
int N;

int main() {
    // 체크포인트 N 입력
    cin >> N;

    // 각 지점의 위치 입력
    for(int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // 최소 거리를 매우 큰 값으로 초기화
    int ans = INF;

    // 각 체크포인트를 건너뛰는 경우를 모두 시도
    for(int i = 1; i < N - 1; i++) {
        int dist = 0;
        int prev_idx = 0;

        // i번째 체크포인트를 제외한 총 이동 거리 계산
        for(int j = 1; j < N; j++) {
            if(j == i) continue;
            dist += abs(x[prev_idx] - x[j]) + abs(y[prev_idx] - y[j]);
            prev_idx = j;
        }

        // 최소 거리 업데이트
        ans = min(ans, dist);
    }

    // 결과 출력
    cout << ans << endl;

    return 0;
}