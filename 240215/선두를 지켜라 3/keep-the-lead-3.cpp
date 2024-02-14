#include <iostream>
#define MAX 1234567

using namespace std;

int a[MAX], b[MAX], r[MAX];
int n,m,v,t;
int i,j = 1, cur, mt, cnt;

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n >> m;

    for(i = 1; i <= n; i++)
    {
        cin >> v >> t;
        cur += t;

        while(j <= cur) {
            a[j] = a[j - 1] + v;
            j++;
        }
    }

    j = 1, cur = 0, mt = 0;
    for(i = 1; i <= m; i++)
    {
        cin >> v >> t;
        cur += t;

        while(j <= cur) {
            b[j] = b[j - 1] + v;
            j++, mt++;
        }
    }

    for(i = 1; i <= mt; i++) {
        if(a[i] > b[i]) r[i] = 1;
        else if(a[i] < b[i]) r[i] = 2;
        else r[i] = 3;
    }

    for(i = 1; i <= mt; i++) {
        if(r[i] != r[i-1]) cnt++;
    }

    cout << cnt;
    return 0;
}