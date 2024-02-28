#include <iostream>
using namespace std;

int n,cnt=-9999;
int a[102];

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n - 2; i++) {
        for(int j = i + 2; j <= n; j++) {
            if(cnt < a[i] + a[j]) {
                cnt = a[i] + a[j];
            }
        }
    }

    cout << cnt;
    return 0;
}