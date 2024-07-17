#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, w;
    cin >> word >> w;

    size_t idx = 0; 
    while ((idx = word.find(w, idx)) != string::npos) { 
        word.erase(idx, w.length());
    }

    cout << word; 

    return 0;
}