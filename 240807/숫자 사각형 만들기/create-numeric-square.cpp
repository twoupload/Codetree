#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int stampNum = 9 - i;
        for(int j = 0; j < n; j++) {
            cout << stampNum << " ";

            if(stampNum != 1) stampNum--;
        }
        cout << endl;
    }

    return 0;
}