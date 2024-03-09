#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;
vector<int> possible(987);

bool check(int num, int q, int s, int b) {
    int strike = 0, ball = 0;
    vector<int> query(3), number(3);

    for (int i = 0; i < 3; i++) {
        query[i] = q % 10;
        number[i] = num % 10;
        q /= 10;
        num /= 10;
    }

    for (int i = 0; i < 3; i++) {
        if (query[i] == number[i]) strike++;
        for (int j = 0; j < 3; j++) {
            if (i != j && query[i] == number[j]) ball++;
        }
    }

    if (strike == s && ball == b) return true;
    return false;
}

int main() {
    cin >> n;

    for (int i = 123; i <= 987; i++) {
        int x = i / 100;
        int y = (i / 10) % 10;
        int z = i % 10;
        if (x == y || y == z || z == x || y == 0 || z == 0) continue;
        possible[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        int num, s, b;
        cin >> num >> s >> b;

        for (int j = 123; j <= 987; j++) {
            if (possible[j] && !check(j, num, s, b)) possible[j] = 0;
        }
    }

    int count = 0;
    for (int i = 123; i <= 987; i++) {
        if (possible[i]) count++;
    }

    cout << count << endl;

    return 0;
}