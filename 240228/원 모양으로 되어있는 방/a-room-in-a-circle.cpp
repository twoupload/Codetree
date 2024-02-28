#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long ans = LLONG_MAX;

    vector<int> rooms(N);
    for(int i = 0; i < N; i++) {
        cin >> rooms[i];
    }

    for(int i = 0; i < N; i++) {
        long long dist = 0;
        for(int j = i; j < i + N; j++) {
            int room_idx = j % N;
            dist = dist +  static_cast<long long>(rooms[room_idx]) * abs(j - i);
        }
        ans = min(ans, dist);
    }

    cout << ans << endl;

    return 0;
}