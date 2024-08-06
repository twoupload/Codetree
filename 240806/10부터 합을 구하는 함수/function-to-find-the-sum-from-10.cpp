#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    int sum = 0;
    for(int i = 10; i <= n; i++) {
        sum += i;
    }

    cout << sum;
    return 0;
}