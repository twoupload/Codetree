#include <iostream>
#define MAX 1234567

using namespace std;

long long n, m, t, allt_a, allt_b, cur,cnt;
int i,j;
int a[MAX], b[MAX], r[MAX];
char d;


int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n >> m;


    cur = 1;
    for(i = 1; i <= n; i++) {
        cin >> t >> d;
        allt_a += t;

        if(d == 'R') {
            while(cur <= allt_a) {
                a[cur] = a[cur - 1] + 1;
                cur++;
            }
        }

        else {
            while(cur <= allt_a) {
                a[cur] = a[cur - 1] - 1;
                cur++;
            }
        }
    }

    cur = 1;
    for(i = 1; i <= m; i++) {
        cin >> t >> d;
        allt_b += t;

        if(d == 'R') {
            while(cur <= allt_b) {
                b[cur] = b[cur - 1] + 1;
                cur++;
            }
        }
        else {
            while(cur <= allt_b) {
                b[cur] = b[cur - 1] - 1;
                cur++;
            }
        }
    }

    cur = max(allt_a, allt_b);


    if(allt_a < allt_b) {
        for(i = allt_a + 1; i <= cur; i++) {
            a[i] = a[allt_a];
        }
    }
    else {
        for(i = allt_b + 1; i <= cur; i++) {
            b[i] = b[allt_b];
        }
    }




    for(i = 1; i <= cur; i++) {
        if(a[i] == b[i]) {
            if(r[i-1] == 0) r[i] = 1;
            else r[i] = 2;
        }

        if(r[i] == 1) cnt++;
    }

    cout << cnt;
    return 0;
}