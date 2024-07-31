#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        if(abs(n1) < abs(n2)) cout << abs(n2) << endl;
        else if (abs(n1) == abs(n2) cout << abs(n1) <<< endl;
        else cout << abs(n1) << endl;
    }

    return 0;
}