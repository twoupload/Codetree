#include <iostream>
#include <vector>
#include <unordered_set> // 중복 검사를 위한 해시 테이블
using namespace std;

bool restoreSequence(const vector<int>& diff, vector<int>& seq, int start) {
    seq[0] = start; // 첫 번째 숫자 설정

    for (int i = 1; i < seq.size(); i++) { // seq.size()를 사용하여 범위 오류 방지
        seq[i] = diff[i - 1] - seq[i - 1];
        if (seq[i] <= 0 || seq[i] > diff.size() + 1) { // 범위 검사 수정
            return false;
        }
    }

    // 중복 검사 (unordered_set 사용)
    unordered_set<int> uniqueNums;
    for (int num : seq) {
        if (uniqueNums.count(num) > 0) {
            return false;
        }
        uniqueNums.insert(num);
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> diff(n - 1); // 동적 배열 사용
    for (int i = 0; i < n - 1; i++) {
        cin >> diff[i];
    }

    vector<int> seq(n); // 동적 배열 사용

    for (int start = 1; start < diff[0]; start++) { // 시작 숫자 범위 수정
        if (restoreSequence(diff, seq, start)) {
            for (int num : seq) {
                cout << num << " ";
            }
            return 0;
        }
    }

    cout << "-1"; // 해답이 없는 경우 -1 출력
    return 0;
}