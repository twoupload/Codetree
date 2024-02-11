#include <iostream>
#define MAX 1001

using namespace std;

int a[MAX];
int dp[MAX];
int n, i, maxx = -9999;

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    dp[1] = 1;

    for(i = 2; i <= n; i++) {
        if(a[i] == a[i-1]) {
            dp[i] = dp[i-1] + 1;
        }
        else {
            dp[i] = 1;
        }
    }

    for(i = 1; i <= n; i++) {
        if(dp[i] > maxx) maxx = dp[i];
    }

    cout << maxx;
    return 0;
}