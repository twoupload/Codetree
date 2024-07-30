#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a,b;

    cin >> a >> b;

    if(b < a) swap(a, b);

    int cnt = 0;
    for(int i = (int) sqrt(a); i <= (int) sqrt(b); i++) {
        cnt++;
    }

    cout << cnt - 1;
    return 0;
}