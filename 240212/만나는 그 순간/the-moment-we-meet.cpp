#include <iostream>
#define MAX 1001

using namespace std;

int n, m, t, cur, temp;
char d;
int a[MAX], b[MAX];
int i,j;

int main() {
    //freopen("input.txt", "r", stdin);

    cin >> n >> m;

    cur = 1;
    for(i = 1; i <= n; i++) {
        cin >> d >> t;

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

    while(1) {
        if(a[cur] == b[cur]) {
            cout << cur;
            return 0;
        }
        cur++;
    }

    cout << -1;
    return 0;
}