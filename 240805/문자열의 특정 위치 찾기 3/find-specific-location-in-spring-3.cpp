/// 2
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    char w;

    cin >> str;
    cin >> w;

    int idx = str.find(w);

    if(idx != string::npos) cout << idx + 1 << endl;
    else cout << "Not Found" << endl;
    return 0;
}