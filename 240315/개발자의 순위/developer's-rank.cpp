#include <iostream>
#include <vector>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    vector<vector<int>> matches(K, vector<int>(N));
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matches[i][j];
        }
    }

    vector<vector<bool>> dominance(N+1, vector<bool>(N+1, true)); // dominance[a][b] == true if a > b

    // Initialize dominance matrix
    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= N; ++b) {
            if (a == b) dominance[a][b] = false; // a developer cannot dominate themselves
            else dominance[a][b] = true; // assume a dominates b until proven otherwise
        }
    }

    // Update dominance matrix based on match results
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                dominance[matches[i][k]][matches[i][j]] = false; // kth cannot dominate jth if jth ranks higher in ith match
            }
        }
    }

    // Count the number of dominating pairs
    int count = 0;
    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= N; ++b) {
            if (dominance[a][b]) count++;
        }
    }

    cout << count << endl;

    return 0;
}