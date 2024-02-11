#include <iostream>

using namespace std;

int a[1001], dp[1001];
int n, t, i, cnt = -9999;


int main()
{

    //freopen("input.txt", "r", stdin);
    cin >> n >> t;

    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(i = 2; i <= n; i++) {
        if(a[i] > t) {
            dp[i] = dp[i-1] + 1;
        }
        else {
            dp[i] = 0;
        }
    }

    for(i = 1; i <= n; i++) {
        if(cnt < dp[i]) {
            cnt = dp[i];
        }
    }

    cout << cnt;
    return 0;
}