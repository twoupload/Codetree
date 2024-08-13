#include <iostream>
using namespace std;

int arr[1001];

int main() {
    int n, a, b;
    cin >> n;
    cin >> a >> b;

    arr[0] = a, arr[1] = b;

    for(int i = 2; i < n; i++) {
        if(i > 0 && i < 100) 
            arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
        else if(i >= 100 && i < 1000)
             arr[i] = (arr[i - 2] + arr[i - 1]) % 100;       
        else
             arr[i] = (arr[i - 2] + arr[i - 1]) % 1000;      
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}