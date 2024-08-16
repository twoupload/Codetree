#include <iostream>
using namespace std;

int a[20][20];
int n;

int main() {
    cin >> n;

    int cnt = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[j][i] = cnt;
            cnt++;
        }
    }   

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }    
    return 0;
}