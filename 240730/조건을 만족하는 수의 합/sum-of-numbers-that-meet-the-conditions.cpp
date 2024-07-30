// 3
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int sum = 0;
    for(int i = n; i <= 500; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }

    cout << sum;
    return 0;
}