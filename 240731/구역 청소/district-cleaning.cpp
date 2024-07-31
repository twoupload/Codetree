#include <iostream>
using namespace std;

int arr[201];

void set(int n1, int n2) {
    for(int i = n1; i <= n2; i++) {
        arr[i]++;
    }
}

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    set(a,b);
    set(c,d);

    int cnt = 0;
    for(int i = 0; i <= 200; i++) {
        if(arr[i] != 0) cnt++;
    }

    cout << cnt - 1 << endl;

    return 0;
}