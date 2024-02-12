#include <iostream>

using namespace std;

int n, m, v,t, cur, allt, stp, cnt;
int a[101], b[101], r[101];
int i, j;

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n >> m;

    cur = 1;
    for(i = 1; i <= n; i++) {
        cin >> v >> t;

        allt += t;
        while(cur <= allt) {
            a[cur] = a[cur-1] + v;
            cur++;
        }
    }

    cur = 1;
    allt = 0;
    for(i = 1; i <= m; i++) {
        cin >> v >> t;

        allt += t;
        while(cur <= allt) {
            b[cur] = b[cur-1] + v;
            cur++;
        }
    }

    for(i = 1; i <= allt; i++) {
        if(a[i] > b[i]) r[i] = 1;
        else if(a[i] == b[i]) r[i] = 9;
        else r[i] = 2;
    }

    stp = r[1];
    for(i = 2; i <= allt; i++) {
        if(r[i] == 9) continue;
        else {
            if(stp != r[i]) {
                cnt++;
                stp = r[i];
            }
            else continue;
        }
    }

    cout << cnt;
    return 0;
}