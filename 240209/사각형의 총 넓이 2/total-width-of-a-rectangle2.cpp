#include <iostream>
#define OFFSET 100

using namespace std;

int a[201][201];
int c;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, xx, y, yy,lx,ly;
        cin >> x >> y >> xx >> yy;

        lx = (xx + OFFSET) - (x + OFFSET);
        ly = (yy + OFFSET) - (y + OFFSET);

        for(int j = y; j < y + ly; j++) {
            for(int t = x; t < x + lx; t++) {
                a[j][t] = 1;
            }
        }
    }

    for(int i = 0; i <= 100; i++) {
        for(int j = 0; j <= 100; j++) {
            if(a[i][j] != 0) {
                c++;
            }
        }
    }

    cout << c;

    return 0;
}