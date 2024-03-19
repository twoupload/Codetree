#include <iostream>
#include <vector>
using namespace std;

int t, a, b, x;
char c;

vector<int> indexN;
vector<int> indexS;

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

    int cnt = 0;
    for(int i = a; i <= b; i++) {
        for(int j = 0; j < indexS.size(); j++) {
            for(int k = 0; k <indexN.size(); k++) {
                int d1 = abs(indexS[j] - i);
                int d2 = abs(indexN[k] - i);
                if(d1 <= d2) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}