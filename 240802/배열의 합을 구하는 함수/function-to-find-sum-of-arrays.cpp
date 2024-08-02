#include <iostream>
using namespace std;

int arr[1001][1001];
int n;

void srow() {
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }

        arr[i][n] = sum;
    }
}

void scol() {
    for(int j = 0; j < n; j++) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += arr[i][j];
        }

        arr[n][j] = sum;
    }
}

void slowandcol() {
    int sum = 0;
    for(int i = 0; i < n + 1; i++) {
        sum += arr[n][i];
    }

    arr[n][n] = sum;
}

void show() {
    for(int i = 0; i < n +1; i++) {
        for(int j = 0; j < n + 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int nn;
            cin >> nn;
            arr[i][j] = nn;
        }
    }

    srow();
    scol();
    slowandcol();
    show();
    
    return 0;
}