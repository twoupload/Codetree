#include <bits/stdc++.h>
using namespace std;

int t, a, b, x;
char c;

vector<int> indexN;
vector<int> indexS;

// 가장 가까운 거리 찾기
int findClosestDistance(vector<int>& indexes, int position) {
    auto lower = lower_bound(indexes.begin(), indexes.end(), position);
    int dist = INT_MAX;
    if (lower != indexes.end()) {
        dist = min(dist, abs(*lower - position));
    }
    if (lower != indexes.begin()) {
        --lower;
        dist = min(dist, abs(*lower - position));
    }
    return dist;
}

int main() {
    cin >> t >> a >> b;

    for(int i = 1; i <= t; i++) {
        cin >> c >> x;
        
        if(c == 'S') {
            indexS.push_back(x);
        }
        else if(c == 'N') {
            indexN.push_back(x);
        }
    }

    sort(indexS.begin(), indexS.end());
    sort(indexN.begin(), indexN.end());

    int cnt = 0;
    for(int i = a; i <= b; i++) {
        int d1 = findClosestDistance(indexS, i);
        int d2 = findClosestDistance(indexN, i);
        if(d1 <= d2) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}