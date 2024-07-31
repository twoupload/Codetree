#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    if(x2 < x3 || x4 < x1) cout << "nonintersecting" << endl;
    else cout << "intersecting" << endl;
    return 0;
}