#include <bits/stdc++.h>
using namespace std;

int n, s, num, i, j, k;
vector<int> v;
vector<int> vv;

int main() {
    cin >> n >> s;

    for(i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }


    for(i = 0; i < v.size() - 1; i++) {
        for(j = i + 1; j < v.size(); j++) {
            int cnt = 0;
            for(k = 0; k < v.size(); k++) {
                if(k != i && k != j) {
                    cnt += v[k];
                }
            }
            vv.push_back(abs(20 - cnt));
        }
    }

    int minn = *min_element(vv.begin(), vv.end());

    cout << minn;
    
    return 0;
}