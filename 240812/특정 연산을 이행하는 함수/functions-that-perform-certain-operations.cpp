#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    for(int i = 0; i < 3; i++) {
        cin >> n;

        if(n % 2 == 0) cout << n / 2 << " ";
        else cout << (n * 3) - 20 << " ";
    }
    return 0;
}