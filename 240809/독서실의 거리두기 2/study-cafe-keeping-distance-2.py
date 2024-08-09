#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int n;
string seats;

int main() {
    // 입력:
    cin >> n;
    cin >> seats;
    
    // Step1-1. 최적의 위치 찾기
    // 인접한 쌍들 중 가장 먼 1간의 쌍을 찾습니다.
    int max_dist = 0;
    int max_i, max_j;
    for(int i = 0; i < n; i++) {
        if(seats[i] == '1') {
            for(int j = i + 1; j < n; j++)
                if(seats[j] == '1') {
                    // 1간의 쌍을 골랐을 때
                    // 두 좌석간의 거리가 지금까지의 최적의 답 보다 더 좋다면
                    // 값을 갱신해줍니다.
                    if(j - i > max_dist) {
                        max_dist = j - i;

                        // 이때, 두 좌석의 위치를 기억합니다.
                        max_i = i;
                        max_j = j;
                    }

                    // 인접한 쌍을 찾았으므로 빠져나옵니다.
                    break;
                }
        }
    }

    // Step1-2. 최적의 위치 찾기(예외 처리)
    // 만약 맨 앞 좌석이 비거나, 맨 뒷 좌석이 비어있는 경우의
    // 예외 처리를 해줍니다.
    int max_dist2 = -1;
    int max_idx = -1;
    // 맨 앞 좌석이 비어있을 때, 맨 앞 좌석에 배정하면
    // 거리가 얼마나 줄어드는지 확인합니다.
    if(seats[0] == '0') {
        int dist = 0;
        for(int i = 0; i < n; i++) {
            if(seats[i] == '1')
                break;
            dist++;
        }
        if(dist > max_dist2) {
            max_dist2 = dist;
            max_idx = 0;
        }
    }

    // 맨 뒷 좌석이 비어있을 때, 맨 뒷 좌석에 배정하면
    // 거리가 얼마나 줄어드는지 확인합니다.
    if(seats[n - 1] == '0') {
        int dist = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(seats[i] == '1')
                break;
            dist++;
        }
        if(dist > max_dist2) {
            max_dist2 = dist;
            max_idx = n - 1;
        }
    }


    // Step2. 최적의 위치에 1을 놓습니다.
    // 앞서 찾은 자리들 중 최적의 위치에 놓으면 됩니다.
    if(max_dist2 >= max_dist / 2)
        seats[max_idx] = '1';
    else
        seats[(max_i + max_j) / 2] = '1';

    // Step3. 이제 인접한 쌍들 중 가장 가까운 1간의 쌍을 찾습니다.
    // 이때의 값이 답이 됩니다.
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(seats[i] == '1') {
            for(int j = i + 1; j < n; j++)
                if(seats[j] == '1') {
                    ans = min(ans, j - i);
					
					// 인접한 쌍을 찾았으므로 빠져나옵니다.
                    break;
                }
        }
    }

    cout << ans;
    return 0;
}