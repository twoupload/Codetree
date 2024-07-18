#include <bits/stdc++.h>
using namespace std;

int main() {
    string encrypted, key;
    getline(cin, encrypted);
    cin >> key;

    // 암호화 규칙 저장 (unordered_map 사용)
    unordered_map<char, char> decryptionMap;
    for (int i = 0; i < 26; i++) {
        decryptionMap[key[i]] = 'a' + i;
    }

    string decrypted = "";
    for (char c : encrypted) {
        if (c == ' ') { // 공백 문자는 그대로 추가
            decrypted += c;
        } else {
            decrypted += decryptionMap[c]; // 복호화된 문자 추가
        }
    }

    cout << decrypted << endl;
    return 0;
}