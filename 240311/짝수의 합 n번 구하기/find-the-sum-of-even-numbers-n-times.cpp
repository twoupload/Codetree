#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        int sum = 0;
        for(int j = a; j <= b; j++) {
            
            if(j % 2 == 0) sum += j;
        }
        cout << sum << endl; 
    }
    return 0;
}