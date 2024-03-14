#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int n;

struct LINE 
{
    int x, y;
};

LINE line[100];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> line[i].x >> line[i].y;
    }

    int cnt = n;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(line[j].x < line[i].x) {
                if(line[j].y > line[i].y) cnt = cnt - 2; 
            }
            else if(line[j].x == line[i].x) {
                if(line[j].y == line[i].y) cnt = cnt - 2;
            }
            else {
                if(line[j].y <= line[i].y) cnt = cnt - 2;
            }
        }
    }

    cout << cnt;
    return 0;
}