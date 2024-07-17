#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, w;
    cin >> word >> w;

    int idx = 0; 
    while ((idx = word.find(w)) != string::npos) { 
        word.erase(idx, w.size());
    }

    cout << word; 

    return 0;
}