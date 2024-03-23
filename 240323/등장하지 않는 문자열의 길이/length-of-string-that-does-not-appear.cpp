#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int N;
    string input;
    cin >> N >> input;

    // 가능한 모든 길이에 대해 확인
    for (int len = 1; len <= N; ++len) {
        bool found = false;
        unordered_set<string> substrings;

        // 모든 연속 부분 문자열을 확인
        for (int i = 0; i <= N - len; ++i) {
            string substring = input.substr(i, len);

            // 이미 등장한 부분 문자열인지 검사
            if (substrings.find(substring) != substrings.end()) {
                found = true;
                break;
            }

            // 부분 문자열 집합에 추가
            substrings.insert(substring);
        }

        // 2번 이상 등장하지 않는 경우, 최솟값을 찾았으므로 출력하고 종료
        if (!found) {
            cout << len << endl;
            break;
        }
    }

    return 0;
}