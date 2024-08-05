#include <iostream>
using namespace std;

int arr[101];
int n;

int main() {

    cin >> n;

    arr[0] = 1;
    arr[1] = n;

    int idx = 2;
    while(1) {
        arr[idx] = arr[idx - 2] + arr[idx - 1];
        
        if(arr[idx] >= 1000) break;
        else idx++;
    }

    for(int i = 0; i <= idx; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}