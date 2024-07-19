#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int sum = 0;
    for(int i = 0; i < 3; i++) {
        double num;
        cin >> num;

        sum += (int)(num + 0.5);
    }

    cout << sum << endl;
    cout << sum / 3;
    return 0;
}