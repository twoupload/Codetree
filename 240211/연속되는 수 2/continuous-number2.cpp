#include <iostream>
#define MAX 1001

using namespace std;

int a[MAX];
// dp 동적계획법을 사용.
int dp[MAX]; 
int n, i;

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    dp[1] = 1;

    for(i = 2; i <= n; i++) {
        if(a[i] != a[i-1]) {
            dp[i] = dp[i-1] + 1;
        }
        else {
            dp[i] = dp[i - 1];
        }
    }

    cout << dp[n];
    return 0;
}