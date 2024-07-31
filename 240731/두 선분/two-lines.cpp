#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    if(x2 >= x3) {
        cout << "intersecting" << endl;
    } else if (x4 >= x1) {
        cout << "intersecting" << endl;
    } else if (x3 <= x1 && x2 <= x4) {
        cout << "intersecting" << endl;
    } else if (x1 <= x3 && x4 <= x2) { 
        cout << "intersecting" << endl;
    } else {
        cout << "nonintersecting" << endl;
    }
    return 0;
}