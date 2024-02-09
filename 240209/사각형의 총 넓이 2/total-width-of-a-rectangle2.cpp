#include <iostream>
#define OFFSET 100

using namespace std;

int a[201][201];
int c,n,x,xx,y,yy,lx,ly;
int i,j,t;

int main()
{
    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> x >> y >> xx >> yy;

        lx = (xx + OFFSET) - (x + OFFSET);
        ly = (yy + OFFSET) - (y + OFFSET);

        for(j = y; j < y + ly; j++) {
            for(t = x; t < x + lx; t++) {
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