#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, C, G, H;
    cin >> N >> C >> G >> H;

    vector<pair<int, int>> tempRanges(N);
    for (int i = 0; i < N; ++i) {
        cin >> tempRanges[i].first >> tempRanges[i].second;
    }

    // 가능한 모든 온도를 저장하는 배열
    vector<int> allTemps;
    for (int i = 0; i < N; ++i) {
        allTemps.push_back(tempRanges[i].first);
        allTemps.push_back(tempRanges[i].second);
    }
    // 중복 제거 및 정렬
    sort(allTemps.begin(), allTemps.end());
    allTemps.erase(unique(allTemps.begin(), allTemps.end()), allTemps.end());

    int maxWorkload = 0;
    // 가능한 모든 온도에 대해 최대 작업량을 계산
    for (int temp : allTemps) {
        int currentWorkload = 0;
        for (int i = 0; i < N; ++i) {
            if (temp < tempRanges[i].first) {
                currentWorkload += C;
            } else if (temp >= tempRanges[i].first && temp <= tempRanges[i].second) {
                currentWorkload += G;
            } else {
                currentWorkload += H;
            }
        }
        maxWorkload = max(maxWorkload, currentWorkload);
    }

    cout << maxWorkload << endl;

    return 0;
}