#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

int n, k, cmax, maxx;

int idx[MAX + 1];

int main() {
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int s;
        char alp;

        cin >> s >> alp;

        if(alp == 'G') idx[s] = 1;
        if(alp == 'H') idx[s] = 2;

        if(cmax < s) cmax = s;
    }

    
    for(int i = 1; i <= MAX - k; i++) {
        int sum = 0;
        for(int j = i; j <= i + k; j++) {
            sum += idx[j];
        }

        maxx = max(maxx, sum);
    }
    
    cout << maxx;
    return 0;
}