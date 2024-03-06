#include <iostream>
#define MAX 12345678
using namespace std;

int n, k, i, j, cnt = -99999, maxx = -99999;
int a[MAX];

bool isRange(int minNum, int maxNum) {
    return minNum > 0 && maxNum <= cnt;
}

int main() {
    cin >> n >> k;

    for(i = 0; i < n; i++) {
        int g, w;
        cin >> g >> w;

        if(cnt < w) cnt = w;

        a[w] = g;
    }

    for(i = 1; i <= cnt; i++) {
        int temp = 0;
        if(isRange(i - k, i + k)) {
            for(j = i - k; j <= i + k; j++) {
                temp += a[j];
            }

            if(maxx < temp) maxx = temp;
        }
    }
    
    cout << maxx;
    return 0;
}