#include <bits/stdc++.h>
using namespace std;

int i,j,k;
int num,minn = 1234567;
vector<int> v;

int getD(int i, int j, int k) {
    int sum1 = v[i] + v[j] + v[k];
    int sum2 = 0;
    for(int t = 0; t < 6; t++) {
        sum2 += v[t];
    }

    sum2 -= sum1;
    return abs(sum1 - sum2);
}

int main() {
    for(i = 0; i < 6; i++) {
        cin >> num;
        v.push_back(num);
    }

    for(i = 0; i < v.size() - 2; i++) {
        for(j = i + 1; j < v.size() - 1; j++) {
            for(k = j + 1; k < v.size(); k++) {
                minn = min(minn, getD(i, j, k));
            }
        }
    }

    cout << minn;
    return 0;
}