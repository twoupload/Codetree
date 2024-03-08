#include <bits/stdc++.h>
using namespace std;

int n;
int a1,b1,c1;
int a2,b2,c2;

int t1[5], t2[5], t3[5];
string num[5], num2[5];

void tempering(int x, int sw) {
    int tt[5] = {0,0,0,0,0};
    if(x - 2 == -1) {
        tt[0] = n - 1;
        tt[1] = n;
        tt[2] = x;
        tt[3] = x + 1;
        tt[4] = x + 2;
    }
    else if(x - 2 == 0) {
        tt[0] = n;
        tt[1] = x - 1;
        tt[2] = x;
        tt[3] = x + 1;
        tt[4] = x + 2;
    }
    else {
        tt[0] = x - 2;
        tt[1] = x - 1;
        tt[2] = x;
        tt[3] = x + 1;
        tt[4] = x + 2;
    }

    if(sw == 1) {
        for(int i = 0; i < 5; i++) {
            t1[i] = tt[i];
        }
    }
    else if(sw == 2) {
        for(int i = 0; i < 5; i++) {
            t2[i] = tt[i];
        }
    }
    else {
        for(int i = 0; i < 5; i++) {
            t3[i] = tt[i];
        }
    }
}

void getN(int a, int b, int c, int tNum) {
    tempering(a, 1);
    tempering(b, 2);
    tempering(c, 3);

    if(tNum == 1) {
        for(int i = 0; i < 5; i++) {
            num[i] = to_string(t1[i]) + to_string(t2[i]) + to_string(t3[i]);
        }
    }
    else {
        for(int i = 0; i < 5; i++) {
            num2[i] = to_string(t1[i]) + to_string(t2[i]) + to_string(t3[i]);
        }
    }
}

int main() {
    cin >> n;
    
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    getN(a1,b1,c1, 1);
    getN(a2,b2,c2, 2);

    int cnt = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(num[i] == num2[j]) cnt++;
        }
    }

    cout << 250 - cnt;
    return 0;
}