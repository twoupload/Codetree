// 5
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int Asci, Asoc, Bsci, Bsoc;

    cin >> Asci >> Asoc;
    cin >> Bsci >> Bsoc;

    if(Asci > Bsci && Asoc > Bsoc) cout << 1;
    else cout << 0;
    return 0;
}