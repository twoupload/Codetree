#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int jjak = 0, hol = 0;
    for(int i = 0; i < n; i++) {
        int k; 
        cin >> k;

        if(k == 0) break;
        else {
            if(k % 2 == 0) jjak++;
            else hol++;
        }
    }

    cout << jjak << endl;
    cout << hol << endl;
    return 0;
}