// 2
#include <iostream>
using namespace std;

int main() {
    int count, num;
    cin >> count;

    while(1) {
        cin >> num;

        if(num == 0) break;

        else{
            if(num % 3 == 0) cout << num / 3;
            else cout << num + 2;

            cout << endl;
        }
    }
    return 0;
}