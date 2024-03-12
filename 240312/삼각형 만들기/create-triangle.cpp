#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    int maxArea = 0;
    // 모든 점의 조합을 순회하며 삼각형의 넓이를 계산합니다.
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                // i, j, k가 서로 다르고, x축 또는 y축에 평행한 변을 가지는지 확인합니다.
                if (i != j && i != k && j != k) {
                    // i와 j가 x축에 평행하고, i와 k가 y축에 평행한 경우
                    if (points[i].first == points[j].first && points[i].second == points[k].second) {
                        int area = abs(points[i].first - points[k].first) * abs(points[i].second - points[j].second);
                        maxArea = max(maxArea, area);
                    }
                    // i와 k가 x축에 평행하고, i와 j가 y축에 평행한 경우
                    else if (points[i].first == points[k].first && points[i].second == points[j].second) {
                        int area = abs(points[i].first - points[j].first) * abs(points[i].second - points[k].second);
                        maxArea = max(maxArea, area);
                    }
                }
            }
        }
    }

    cout << maxArea << endl; // 최대 넓이에 2를 곱하지 않고, 올바른 넓이를 출력합니다.

    return 0;
}