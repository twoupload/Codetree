#include <iostream>
using namespace std;

int d[9];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int nn;
        cin >> nn;

        d[nn] += 1;
    }

    for(int i = 1; i <= 8; i++) {
        cout << i << " - " << d[i] << endl;
    }
    return 0;
}