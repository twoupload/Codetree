#include <bits/stdc++.h>
using namespace std;

int n, i, j, k;
int timeTable[10001];


struct S {
    int start, end;
};

S s[101];

void arrClear() {
    for(int i = 0; i < 10000; i++) {
        timeTable[i] = 0;
    }
}

int cal() {
    int cnt = 0;
    for(int i = 0; i < 10000; i++) {
        if(timeTable[i] != 0) cnt++;
    }
    return cnt;
}


int main() {
    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> s[i].start >> s[i].end;
    }
    
    int maxx = INT_MIN;
    for(i = 0; i < n; i++) {
        
        arrClear();
        for(j = 0; j < n; j++) {
            if(j == i) continue;
            for(k = s[j].start; k < s[j].end; k++) {
                timeTable[k] += 1;
            }
        }
        maxx = max(maxx, cal());
    }

    cout << maxx;
    return 0;
}