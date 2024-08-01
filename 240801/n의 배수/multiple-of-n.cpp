// 2
#include <iostream>
using namespace std;

int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    int i = 1;
    while(n * i < 200) {

        if((n * i) % 10 == 0) {
            cout << n * i << " ";
            i++;
            break;
        }

        else {
            cout << n * i << " ";
            i++;
        }
    }

    return 0;
}