#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string seat;

int MinDist() {
    int min_dist = n;
    // 둘 다 1인 곳에 대해
    // 모든 쌍을 조사하여, 그 중 가장 가까운 거리를 구합니다.
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(seat[i] == '1' && seat[j] == '1')
                min_dist = min(min_dist, j - i);
    
    return min_dist;
}

int main() {
    // 입력:
    cin >> n;
    cin >> seat;
    
    int ans = 0;
    // 들어갈 위치를 일일이 정해보며
    // 그 상황에서 가장 가까운 사람간의 거리를 구해
    // 가능한 경우 중 최댓값을 계산합니다.
    for(int i = 0; i < n; i++) {
        if(seat[i] == '0') {
            // 비어있는 위치에 인원을 배치합니다.
            seat[i] = '1';
            // 가장 가까운 사람간의 거리를 구해 최댓값을 갱신해줍니다.
            ans = max(ans, MinDist());
            // 다시 채워졌던 값을 되돌려줍니다.
            seat[i] = '0';
        }
    }

    cout << ans;
    return 0;
}