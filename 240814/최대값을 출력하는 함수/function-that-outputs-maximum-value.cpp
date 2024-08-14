#include <bits/stdc++.h>
using namespace std;

int n, m;

int maxi() {
    int maxx = INT_MIN;
    int nn;

    for(int i = 0; i < 3; i++) {
        cin >> nn;

        if(nn > maxx) {
            maxx = nn;
        }
    }

    return maxx;
}


int main() {

    m = maxi();
    cout << m;
    return 0;
}