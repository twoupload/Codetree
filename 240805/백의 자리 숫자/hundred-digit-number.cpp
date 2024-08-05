/// 4
#include <iostream>
using namespace std;

int arr[10];
int n, num;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        arr[num / 100] += 1;
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] != 0)
            cout << i << " - " << arr[i] << endl;
    }
    return 0;
}