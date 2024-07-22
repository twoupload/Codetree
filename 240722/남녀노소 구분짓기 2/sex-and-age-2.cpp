// 3
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int gen, age;
    cin >> gen >> age;

    if(gen == 0) {
        if(age < 19) cout <<  'B' << endl;
        else cout << 'M' << endl;
    }

    else {
        if(age < 19) cout <<  'G' << endl;
        else cout << 'W' << endl;
    }
    return 0;
}