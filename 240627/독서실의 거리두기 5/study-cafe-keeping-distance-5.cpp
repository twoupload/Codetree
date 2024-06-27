#include <iostream>
#include <string>
#include <vector>

using namespace std;

int maxDistance(const string& seats) {
    vector<int> occupied;
    for (int i = 0; i < seats.length(); i++) {
        if (seats[i] == '1') {
            occupied.push_back(i);
        }
    }
    occupied.insert(occupied.begin(), -1);  // 시작점에 가상의 사람 추가
    occupied.push_back(seats.length());     // 끝점에 가상의 사람 추가

    int maxDist = 0;
    for (int i = 1; i < occupied.size() - 1; i++) {
        int dist = (occupied[i + 1] - occupied[i - 1]) / 2 - 1;
        maxDist = max(maxDist, dist);
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