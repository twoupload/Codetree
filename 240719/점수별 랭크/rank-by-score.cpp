// 8
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int grade;
    cin >> grade;

    if(grade >= 90) cout << 'S' << endl;
    else if(grade >= 80 && grade < 90) cout << 'A' << endl;
    else if(grade >= 70 && grade < 80) cout << 'B' << endl;
    else if(grade >= 60 && grade < 70) cout << 'C' << endl;
    else cout << 'F' << endl;

    return 0;
}