#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, a, b, c;
    cin >> N;
    cin >> a >> b >> c;

    int count = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (abs(i - a) <= 2 || abs(j - b) <= 2 || abs(k - c) <= 2) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}