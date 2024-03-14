#include <bits/stdc++.h>
using namespace std;

int n;

struct SPOT
{
    int x, y;
};

SPOT s[100];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s[i].x >> s[i].y;
    }

    int minn = INT_MAX;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int dis = (s[i].x - s[j].x) * (s[i].x - s[j].x) 
                    + (s[i].y - s[j].y) * (s[i].y - s[j].y);
            minn = min(minn, dis);
        }
    }

    cout << minn;
    return 0;
}