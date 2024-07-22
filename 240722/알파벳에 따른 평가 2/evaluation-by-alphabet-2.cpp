// 4
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char alp;
    cin >> alp;

    if(alp == 'S') {
        cout << "Superior" << endl;
    } else  if(alp == 'F') {
        cout << "Fantastic" << endl;
    } else if(alp == 'G') {
        cout << "Good" << endl;
    } else if(alp == 'U') {
        cout << "Usually" << endl;
    } else if(alp == 'E') {
        cout << "Effort" << endl;
    } else {
        cout << "Failure" << endl;
    }
    return 0;
}