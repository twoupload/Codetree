#include <iostream>
#include <string>
using namespace std;

struct Segment {
    int start, end;
};

int main() {
    string str;
    cin >> str;

    Segment segments[26];
    bool seen[26] = {false};

    // 각 알파벳의 시작과 끝 위치를 기록
    for (int i = 0; i < 52; i++) {
        char c = str[i];
        int index = c - 'A';
        if (!seen[index]) {
            segments[index].start = i;
            seen[index] = true;
        } else {
            segments[index].end = i;
        }
    }

    int count = 0;

    // 선분의 겹침 여부를 확인
    for (int i = 0; i < 26; i++) {
        for (int j = i + 1; j < 26; j++) {
            // 선분 i와 j가 겹치는지 확인
            if (segments[i].end < segments[j].start || segments[j].end < segments[i].start) {
                continue; // 겹치지 않음
            }
            // 어중간하게 겹치는지 확인
            if (segments[i].start < segments[j].start && segments[i].end > segments[j].end) {
                continue; // 완전히 포함
            }
            if (segments[j].start < segments[i].start && segments[j].end > segments[i].end) {
                continue; // 완전히 포함
            }
            // 어중간하게 겹치는 경우
            count++;
        }
    }

    cout << count << endl;

    return 0;
}