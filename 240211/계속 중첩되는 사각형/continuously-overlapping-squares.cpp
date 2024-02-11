#include <iostream>
#define OFFSET 100
#define MAX 1001

using namespace std;

int a[MAX][MAX];
int n, x, x2,y,y2, lx, ly, cnt;
int i,j,t;

int main()
{
    //freopen("input.txt", "r" ,stdin);

    cin >> n;

    for(i = 1; i <= n; i++) {

        cin >> x >> y >> x2 >> y2;

        lx = (x2 + OFFSET) - (x + OFFSET);
        ly = (y2 + OFFSET) - (y + OFFSET);

        if(i % 2 != 0) {
            for(j = y + OFFSET; j < y + ly + OFFSET; j++) {
                for(t = x + OFFSET; t < x + lx + OFFSET; t++) {
                    a[j][t] = 2;
                }
            }
        }

        else {
            for(j = y + OFFSET; j < y + ly + OFFSET; j++) {
                for(t = x + OFFSET; t < x + lx + OFFSET; t++) {
                    a[j][t] = 1;
                }
            }
        }
    }


    for(i = 0; i <= 202; i++) {
        for(j = 0; j <= 202; j++) {
            if(a[i][j] == 1) cnt++;
        }
    }

    cout << cnt;


    return 0;
}