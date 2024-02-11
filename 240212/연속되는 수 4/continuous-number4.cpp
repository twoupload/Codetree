#include <iostream>

using namespace std;

int a[1001], dp[1001];
int n,i,cnt =  - 9999;

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    dp[1] = 1;

    for(i = 2; i <= n; i++) {
        if(a[i] > a[i-1]) {
            dp[i] = dp[i-1] + 1;
        }

        else {
            dp[i] = 1;
        }
    }

    for(i = 1; i <= n; i++) {
        if(cnt < dp[i]) cnt = dp[i];
    }

    cout << cnt;
    return 0;
}