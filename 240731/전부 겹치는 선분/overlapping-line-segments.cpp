#include <iostream>
using namespace std;

int arr[201];

void set(int n1, int n2) {
    for(int i = n1; i <= n2; i++) {
        arr[i] += 1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        set(n1, n2);
    }

    bool sw = false;
    for(int i = 0; i < 200; i++) {
        if(arr[i] == n) sw = true;
    }

    if(sw == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}