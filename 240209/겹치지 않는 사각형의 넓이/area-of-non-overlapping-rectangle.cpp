#include <iostream>
#define OFFSET 1000

using namespace std;

int i,j,t;
int x, y, x2, y2, lx, ly, c;
int a[3000][3000];

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    for(i = 1; i <= 3; i++) {
        cin >> x >> y >> x2 >> y2;

        lx = (x2 + OFFSET) - (x + OFFSET);
        ly = (y2 + OFFSET) - (y + OFFSET);

        if(i == 3) {
            for(j = y + OFFSET; j < y + ly + OFFSET; j++) {
                for(t = x + OFFSET; t < x + lx + OFFSET; t++) {
                    a[j][t] = 0;
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

    for(i = 0; i <= 2001; i++) {
        for(j = 0; j <= 2001; j++) {
            if(a[i][j] != 0) c++;
        }
    }

    cout << c;
    return 0;
}