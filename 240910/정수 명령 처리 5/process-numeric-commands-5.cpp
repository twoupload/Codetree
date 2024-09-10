#include <iostream>
#include <vector>
using namespace std;

int n, i, k;
string str;

vector<int> v;

int main() {
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> str;
        
        if(str == "push_back") {
            cin >> k;
            v.push_back(k);
        } else if (str == "get") {
            cin >> k;
            cout << v[k - 1] << endl;
        } else if (str == "size") {
            cout << v.size() << endl;
        } else {
            v.pop_back();
        }
    }
    return 0;
}