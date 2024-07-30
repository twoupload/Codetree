#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    cin >> num;

    int cnt = 0;
    int sum = 0;

    for(int i = 0; i < num; i++) {
        int n;
        cin >> n;

        if(n % 5 != 0 && n % 7 != 0) {
            cnt++;
            sum += n;
        }
    }
    cout << fixed;
    cout.precision(1);

    cout << sum << endl;
    cout << (double) sum / cnt << endl;
    return 0;
}