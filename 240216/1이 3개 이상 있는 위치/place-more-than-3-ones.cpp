#include <iostream>
#define MAX 1234567

using namespace std;

int t[1001][1001];
int i,j,n,a,cnt;

int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            cin >> t[i][j];
        }
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(t[i-1][j] == 1)
                cnt++;
            if(t[i+1][j] == 1)
                cnt++;
            if(t[i][j-1] == 1)
                cnt++;
            if(t[i][j+1] == 1)
                cnt++;

            if(cnt >= 3) a++;

            cnt = 0;
        }
    }

    cout << a;
    return 0;
}