#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_H 1000

using namespace std;

int n;

int h[MAX_N];

int main() {
    // 입력
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> h[i];

    int ans = 0;

    // 각 높이에 대해
    // 빙산 덩어리의 개수의 최댓값을 구합니다.
    for(int i = 1; i < MAX_H; i++) {
		// 물의 높이가 i일때 빙산 덩어리의 개수를 구합니다.
        int cnt = 0;

        // 가장 왼쪽에 빙산이 있는 경우의 예외를 처리해줍니다.
        if(h[0] > i)
            cnt++;

        // 바로 앞 블록은 해수면에 잠겨있고
        // 자기 자신의 블록은 해수면 위에 떠있는 경우,
        // 자기 자신 블록부터 시작하는 빙산이 하나 더 있습니다.
        for(int j = 1; j < n; j++) {
            if(h[j] > i && h[j - 1] <= i)
                cnt++;
        }

        ans = max(ans, cnt);
	}
    
    cout << ans;
	
    return 0;
}