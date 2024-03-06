#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> candies(201, 0);  // 사탕의 개수를 저장할 벡터

    for (int i = 0; i < N; i++) {
        int candy, location;
        cin >> candy >> location;
        candies[location] += candy;  
    }

    vector<int> prefix_sum(201, 0);  // 각 위치까지의 누적 합을 저장할 벡터
    prefix_sum[0] = candies[0];
    for (int i = 1; i <= 200; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + candies[i];
    }

    // 각 위치에서 [c-K, c+K] 구간의 사탕 개수를 계산하여 최대값을 찾습니다.
    int max_candy = 0;
    for (int c = K; c <= 100 + K; c++) {
        int temp = prefix_sum[min(200, c + K)] - ((c - K - 1 >= 0) ? prefix_sum[c - K - 1] : 0);
        max_candy = max(max_candy, temp);
    }

    cout << max_candy;

    return 0;
}