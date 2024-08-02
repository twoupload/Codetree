// 5
#include <iostream>
using namespace std;

int arr[101];

int main() {
    int n, idx = 0, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(1) {
        if(arr[idx] == 0) break;
        idx++;
    }

    sum = arr[idx - 1] + arr[idx - 2] + arr[idx - 3] + arr[idx - 4] + arr[idx - 5];

    cout << sum << endl;
    return 0;
}