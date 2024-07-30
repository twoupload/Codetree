/// 4
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int seven = 0, five = 0;
    for(int i = 0; i < n; i++) {
        int nn;
        cin >> nn;

        if(nn % 5 == 0 && nn % 7 == 0) {
            five++;
            seven++;
        } else if(nn % 5 == 0) {
            five++;
        } else  if(nn % 7 == 0) {
            seven++;
        } else {
            continue;
        }
    }

    cout << five << endl;
    cout << seven << endl;
    return 0;
}