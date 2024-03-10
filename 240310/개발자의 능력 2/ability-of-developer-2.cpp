#include <bits/stdc++.h>
#include <vector>
using namespace std;

int a[6],temp[20];
int i, j;

vector<int> v;
vector<int> :: iterator iter;

int main() {
    for(i = 0; i < 6; i++) {
        int num;
        cin >> num;
        a[i] = num;
    }

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 6; j++) {
            v.push_back(a[i] + a[j]);
        }
    }

    sort(v.rbegin(), v.rend());

    int maxx = v[0], minn = v[2];

    cout << maxx - minn;
    return 0;
}