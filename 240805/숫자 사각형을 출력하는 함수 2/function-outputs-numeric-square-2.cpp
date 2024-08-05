#include <iostream>
using namespace std;

int n;
int arr[101][101];

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        arr[i][1] = i;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 2; j <= n; j++) {
            arr[i][j] = arr[i][j - 1] * 2;
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}