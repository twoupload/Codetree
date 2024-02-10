#include <bits/stdc++.h>
#define OFFSET 1000

using namespace std;

struct F {
    int fx;
    int fy;
};

int x, y, x2, y2, lx, ly, kx, ky, cnt;
int maxX = -9999,maxY= -9999,minX= 9999 ,minY= 9999,lenx,leny;
int i,j,t;
int a[10001][10001];
F f[10001];

int main() {
    //freopen("input.txt", "r", stdin);



    for(i = 0; i < 2; i++) {
        cin >> x >> y >> x2 >> y2;

        lx = (x2 + OFFSET) - (x + OFFSET);
        ly = (y2 + OFFSET) - (y + OFFSET);

        // 남은 면을 배열에 찍는 과정
        if(i == 0) {
            for(j = y + OFFSET; j < y + ly + OFFSET; j++) {
                for(t = x + OFFSET; t < x + lx + OFFSET; t++) {
                    a[j][t] = 1;
                }
            }
        }
        else {
            for(j = y + OFFSET; j < y + ly + OFFSET; j++) {
                for(t = x + OFFSET; t < x + lx + OFFSET; t++) {
                    a[j][t] = 0;
                }
            }
        }

    }

    // 관련 구조체에 각 좌표를 넣는 과정
    for(i = 0; i < 2001; i++) {
        for(j = 0; j < 2001; j++) {
            if(a[i][j] == 1) {
                f[kx++].fx = i;
                f[ky++].fy = j;
                cnt++;
            }
        }
    }


    // 좌표를 이용해 길이를 계산
    for(i = 0; i < cnt; i++) {
        if(f[i].fx > maxX) maxX = f[i].fx;
        if(f[i].fy > maxY) maxY = f[i].fy;
        if(f[i].fx < minX) minX = f[i].fx;
        if(f[i].fy < minY) minY = f[i].fy;
    }

    lenx = maxX - minX + 1;
    leny = maxY - minY + 1;

    // 넓이 도출.
    cout << lenx * leny;

    return 0;

}