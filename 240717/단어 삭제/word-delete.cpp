#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, w;
    cin >> word >> w;

    int idx = word.find(w); 
    while (idx != string::npos) {
        word.erase(idx, w.size());
        idx = word.find(w, idx); // 현재 위치부터 다시 탐색
    }

    cout << word; // 최종 결과 출력

    return 0;
}