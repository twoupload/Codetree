#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> xs(N), ys(N);
    for (int i = 0; i < N; ++i) {
        cin >> xs[i] >> ys[i];
    }

    int M = N; // 가능한 최대 점의 수를 초기화

    // x축과 y축에 평행한 직선은 짝수 위치에 그어집니다.
    // 따라서, 각 점의 x, y 좌표에 대해 -1과 +1을 해서 가능한 직선의 위치를 탐색합니다.
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int xLine = xs[i] + 1; // x축에 평행한 직선
            int yLine = ys[j] + 1; // y축에 평행한 직선
            
            int counts[4] = {0}; // 각 구역별 점의 수
            
            for (int k = 0; k < N; ++k) {
                if (xs[k] < xLine && ys[k] < yLine) counts[0]++;
                else if (xs[k] < xLine && ys[k] > yLine) counts[1]++;
                else if (xs[k] > xLine && ys[k] < yLine) counts[2]++;
                else if (xs[k] > xLine && ys[k] > yLine) counts[3]++;
            }
            
            // 현재 직선의 위치에서 가장 많은 점이 있는 구역의 점의 수
            int maxCount = *max_element(counts, counts + 4);
            
            // 가능한 M의 최소값 업데이트
            M = min(M, maxCount);
        }
    }

    cout << M << endl;

    return 0;
}