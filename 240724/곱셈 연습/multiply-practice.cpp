#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    
    int temp = m;
    int bak, sip, ill;

    bak = m / 100;
    m = m % 100;

    sip = m / 10;
    m = m % 10;

    ill = m;

    cout << n * ill << endl;
    cout << n * sip << endl;
    cout << n * bak << endl;
    cout << n * temp << endl;
    return 0;
}