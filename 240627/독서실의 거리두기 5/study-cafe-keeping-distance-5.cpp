#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string seats;
    cin >> seats;

    int maxDistance = 0;
    int prevOccupied = -1;

    for (int i = 0; i < N; i++) {
        if (seats[i] == '0') {
            int distance = (prevOccupied == -1) ? i : i - prevOccupied - 1;
            maxDistance = max(maxDistance, distance);
            prevOccupied = i;
        }
    }

    if (seats[N-1] == '0') {
        maxDistance = max(maxDistance, N - prevOccupied - 1);
    }

    cout << maxDistance + 1 << endl;

    return 0;
}