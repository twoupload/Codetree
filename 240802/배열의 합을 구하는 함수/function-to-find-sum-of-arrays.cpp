#include <iostream>
using namespace std;

int arr[1001][1001];
int n;
int s3, s4, ts;


int main() {
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int nn;
            cin >> nn;
            arr[i][j] = nn;
        }
    }

    for(int i = 0; i < n; i++) {
        int sum1 = 0;
        for(int j = 0; j < n; j++) {
            sum1 += arr[i][j];
        }

        arr[i][n] = sum1;
    }

    for(int j = 0; j < n; j++) {
        int sum2 = 0;
        for(int i = 0; i < n; i++) {
            sum2 += arr[i][j];
        }

        arr[n][j] = sum2;
    }

    for(int i = 0; i < n + 1; i++) {
        s3 += arr[n][i];
    }

    arr[n][n] = s3;

    for(int i = 0; i < n +1; i++) {
        for(int j = 0; j < n + 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}