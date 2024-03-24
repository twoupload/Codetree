#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int maxx = INT_MIN;

    for(int i = 0; i <= c / a; i++) {
        int temp = 0;
        for(int j = 0; j <= c / b; j++) {
            
            temp = i * a + j * b;

            if(temp <= c) {
                maxx = max(maxx, temp);
            }
        }
    }

    cout << maxx;
    return 0;
}