#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int maxDistance(const string& seats) {
    vector<int> occupied;
    for (int i = 0; i < seats.length(); i++) {
        if (seats[i] == '1') {
            occupied.push_back(i);
        }
    }
    occupied.insert(occupied.begin(), -1); // 시작점에 가상의 사람 추가
    occupied.push_back(seats.length());    // 끝점에 가상의 사람 추가

    int maxDist = 0;
    for (int i = 0; i < occupied.size() - 1; i++) {
        // 각 빈 공간에 대해 모든 가능한 위치를 탐색
        for (int newSeat = occupied[i] + 1; newSeat < occupied[i + 1]; newSeat++) {
            int leftDist = newSeat - occupied[i] - 1;
            int rightDist = occupied[i + 1] - newSeat - 1;
            int dist = min(leftDist, rightDist); // 양쪽 거리 중 작은 값이 유효한 거리
            maxDist = max(maxDist, dist);
        }
    }

    return maxDist;
}

int main() {
    int N;
    string seats;

    cin >> N;
    cin >> seats;

    int result = maxDistance(seats);
    cout << result << endl;

    return 0;
}