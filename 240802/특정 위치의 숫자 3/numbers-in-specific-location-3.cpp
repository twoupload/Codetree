/// 4
#include <iostream>
using namespace std;

int arr[101];

int main() {
    int n, res = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    res = arr[2] + arr[4] + arr[7] - arr[6];

    cout << res << endl;
    return 0;
}