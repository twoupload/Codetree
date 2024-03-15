#include <iostream>
using namespace std;

int n, b;
int p[1000];
int i, j;
int main() {
    cin >> n >> b;

    for(i = 0; i < n; i++) {
        cin >> p[i];
    }

    int maxx = 0;
    for(i = 0; i < n; i++) {
        int cnt = 0;
        for(j = 0; j < n; j++) {
            if(i == j) p[j] = p[j] / 2;

            b = b - p[j];

            if(b >= 0) cnt++;
        }

        maxx = max(maxx, cnt);
    }

    cout << maxx;
    return 0;
}