#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    int N;
    cin >> N;

    string seats;
    cin >> seats;

    vector<int> occupied;

    // 기존에 앉은 사람의 인덱스를 저장
    for (int i = 0; i < N; ++i) {
        if (seats[i] == '1') {
            occupied.push_back(i);
        }
    }

    int max_distance = 0;

    // 양 끝에 사람을 추가하는 경우
    // 좌석의 맨 앞에 추가했을 때
    max_distance = max(max_distance, occupied[0]); // 첫 사람과의 거리

    // 좌석의 맨 뒤에 추가했을 때
    max_distance = max(max_distance, N - 1 - occupied.back()); // 마지막 사람과의 거리

    // 두 사람 사이에 추가하는 경우
    for (int i = 1; i < occupied.size(); ++i) {
        int left = occupied[i - 1];
        int right = occupied[i];
        int dist = (right - left) / 2; // 두 사람 사이의 거리의 절반
        max_distance = max(max_distance, dist);
    }

    cout << max_distance << endl;
    return 0;
}