#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> bombs(N);
    for(int i = 0; i < N; i++) {
        cin >> bombs[i];
    }

    int maxNum = -1;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            // 같은 번호를 가진 폭탄이고 거리가 K 이내인 경우
            if(bombs[i] == bombs[j] && abs(i - j) <= K) {
                maxNum = max(maxNum, bombs[i]);
            }
        }
    }

    cout << maxNum << endl;
    return 0;
}