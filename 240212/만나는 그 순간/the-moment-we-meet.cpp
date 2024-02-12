#include <iostream>
#define MAX 1234567

using namespace std;

int n, m, t, cur, temp, cntA, cntB, len;
char d;
int a[MAX], b[MAX];
int i,j;

int main() {
    //freopen("input.txt", "r", stdin);

    cin >> n >> m;

    cur = 1;
    for(i = 1; i <= n; i++) {
        cin >> d >> t;
        cntA += t;

        if(d == 'R') {
            for(j = cur; j < cur + t; j++) {
                a[j] = a[j - 1] + 1;
                temp = j;
            }
            cur = temp + 1;
        }
        else {
            for(j = cur; j < cur + t; j++) {
                a[j] = a[j - 1] -1;
                temp = j;
            }
            cur = temp + 1;
        }
    }

    cur = 1;
    temp = 0;
    for(i = 1; i <= m; i++) {
        cin >> d >> t;
        cntB += t;

        if(d == 'R') {
            for(j = cur; j < cur + t; j++) {
                b[j] = b[j - 1] + 1;
                temp = j;
            }
            cur = temp + 1;

        }
        else {
            for(j = cur; j < cur + t; j++) {
                b[j] = b[j - 1] -1;
                temp = j;
            }
            cur = temp + 1;
        }
    }


    cur = 1;
    len = max(cntA, cntB);

    while(1) {
        if(cur > len) {
            cout << -1;
            break;
        }
        else {
            if(a[cur] == b[cur]) {
                cout << cur;
                break;
            }
            else {
               cur++;
            }
        }
    }


    return 0;
}