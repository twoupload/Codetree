#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;

        if(k > 0) cout << "plus" << endl;
        else if(k == 0) cout << "zero" << endl;
        else cout << "minus" << endl;
    }
    return 0;
}