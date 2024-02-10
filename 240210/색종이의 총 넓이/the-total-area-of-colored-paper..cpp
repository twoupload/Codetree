#include <iostream>
#define OFFSET 100
#define LEN 8

using namespace std;

int a[1001][1001];
int n, x, y, c;
int i,j,t;

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> x >> y;

        for(j = y + OFFSET; j < y + OFFSET + LEN; j++) {
            for(t = x + OFFSET; t < x + OFFSET + LEN; t++) {
                a[j][t] = 1;
            }
        }
    }

    for(i = 0; i <= 201; i++) {
        for(j = 0; j <= 201; j++) {
            if(a[i][j] == 1) c++;
            else continue;
        }
    }

    cout << c;

    return 0;
}