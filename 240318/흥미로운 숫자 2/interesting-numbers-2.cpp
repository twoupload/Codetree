#include <bits/stdc++.h>
using namespace std;

int x, y, cnt2;
string sNum;

bool interNum(string sNum) {
    int len = sNum.size();
    int cnt = 0;
    for(int i = 0; i < len; i++) {
        int c = 0;
        for(int j = 0; j < len; j++) {
            if(sNum[i] == sNum[j]) c++;
        }
        if(c == len - 1) cnt++;
    }



    if(cnt == len - 1) return true;
    else return false;
}


int main() {
    
    cin >> x >> y;

    for(int i = x; i <= y; i++) {
        sNum = to_string(i);

        if(interNum(sNum))  {
            cnt2++;
        }
    }

    cout << cnt2;

    return 0;
}