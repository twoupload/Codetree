#include <bits/stdc++.h>
using namespace std;

int minCost(int N, int H, int T, vector<int>& heights) {
    int min_cost = INT_MAX;

    for (int i = 0; i <= N - T; ++i) {
        priority_queue<int> max_heap(heights.begin() + i, heights.begin() + i + T);
        priority_queue<int, vector<int>, greater<int>> min_heap(heights.begin() + i, heights.begin() + i + T);

        int curr_cost = 0;
        while (!max_heap.empty() && !min_heap.empty() && (max_heap.top() > H || min_heap.top() < H)) {
            if (max_heap.top() > H) {
                curr_cost += max_heap.top() - H;
                max_heap.pop();
                max_heap.push(H);
            }
            if (min_heap.top() < H) {
                curr_cost += H - min_heap.top();
                min_heap.pop();
                min_heap.push(H);
            }
        }
        min_cost = min(min_cost, curr_cost);
    }

    return min_cost;
}

int main() {
    int N, H, T;
    cin >> N >> H >> T;
    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }
    cout << minCost(N, H, T, heights) << endl;

    return 0;
}