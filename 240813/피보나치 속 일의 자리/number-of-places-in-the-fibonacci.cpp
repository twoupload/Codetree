#include <iostream>
using namespace std;

int arr[1001];

int main() {
    int n, a, b;
    cin >> n;
    cin >> a >> b;

    arr[0] = a, arr[1] = b;

    for(int i = 2; i < n; i++)
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}