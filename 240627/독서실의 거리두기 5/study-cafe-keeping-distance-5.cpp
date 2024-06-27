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
        if (seats[i] == '1') {
            if (prevOccupied == -1) {
                maxDistance = 0;
            } else {
                maxDistance = max(maxDistance, i - prevOccupied - 1);
            }
            prevOccupied = i;
        }
    }

    if (seats[N-1] == '0') {
        maxDistance = max(maxDistance, N - prevOccupied - 1);
    }

    cout << maxDistance - 1 << endl;

    return 0;
}