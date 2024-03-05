#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    int cnt = 0;
    for(int i = 0; i <= n - m; i++) {
        vector<int> temp(a.begin() + i, a.begin() + i + m);
        sort(temp.begin(), temp.end());
        if(temp == b) {
            cnt++;
        }
    }
    
    cout << cnt << endl;

    return 0;
}