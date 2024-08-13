#include <iostream>
using namespace std;

int a[11];

int main() {
    int n, nn;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> nn;

        a[nn / 10] += 1;
    }

    for(int i = 10; i > 0; i--) {
        if(a[i] != 0) cout << i * 10 << " - " << a[i] << endl;
    }
    
    return 0;
}