/// 1
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int score;
    cin >> score;

    if(score >= 90) cout << "passed" << endl;
    else cout << "need " << 90 - score << " more score" << endl;
    return 0;
}