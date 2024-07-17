#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, w; // 원래 단어와 찾을 단어
    cin >> word >> w;

    int idx = 0; // 기본 주소를 지정한다. 
    while ((idx = word.find(w)) != string::npos) { 
        // while문이 시작할 때 idx를 지정한다. 
        // find를 이용해 쓰레기값이 나올때까지(= 찾는 값이 없을 때)
        word.erase(idx, w.size()); // 삭제 한다. 
    }

    cout << word; // 출력

    return 0;
}