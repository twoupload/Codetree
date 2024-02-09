#include <iostream>
#define OFFSET 100

using namespace std;

int a[201][201];
int c,n,x,xx,y,yy,lx,ly;
int i,j,t;

int main()
{
    //freopen("input.txt" ,"r", stdin);

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> x >> y >> xx >> yy;

        lx = (xx + OFFSET) - (x + OFFSET);
        ly = (yy + OFFSET) - (y + OFFSET);

        for(j = y + OFFSET; j < y + ly + OFFSET; j++) {
            for(t = x + OFFSET; t < x + lx + OFFSET; t++) {
                a[j][t] = 1;
            }
        }
    }

    for(i = 0; i <= 200; i++) {
        for(j = 0; j <= 200; j++) {
            if(a[i][j] != 0) {
                c++;
            }
        }
    }

    cout << c;

    return 0;
}