#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // 사탕의 개수를 저장할 벡터를 초기화합니다.
    vector<int> candies(101, 0);

    for (int i = 0; i < N; i++) {
        int candy, location;
        cin >> candy >> location;
        candies[location] += candy;
    }

    // 사탕의 누적 합을 구합니다.
    vector<int> sum(101, 0);
    sum[0] = candies[0];
    for (int i = 1; i <= 100; i++) {
        sum[i] = sum[i-1] + candies[i];
    }

    // 각 위치에서 [c-K, c+K] 구간의 사탕 개수를 계산하여 최대값을 찾습니다.
    int max_candy = 0;
    for (int c = K; c <= 100 - K; c++) {
        max_candy = max(max_candy, sum[c + K] - sum[c - K] + candies[c - K]);
    }

    cout << max_candy;

    return 0;
}