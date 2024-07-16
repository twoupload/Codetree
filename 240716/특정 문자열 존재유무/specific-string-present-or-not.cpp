#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n; // 갯수
    string searchWord, words; // 찾을 단어와 단어 모음들
    vector<string> v; // 매칭되는 단어를 넣을 벡터
    vector<string>::iterator iter; // 이터레이터

    cin >> n >> searchWord;

    for(int i = 0; i < n; i++) {
        // 반복문에서 찾기 시작
        cin >> words; // 단어 모음 받기

        if(words.find(searchWord) != string::npos) { // 만약 찾는 값이 있다면 == 쓰레기값(npos)이 없다면
            v.push_back(words); // 벡터에 넣는다. 
        } else {continue;} // 아니면 그냥 통과

    }

    // 벡터에 들어있는 단어를 몽땅 출력한다. 
    for(iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << endl;
    }
    
    return 0;
}