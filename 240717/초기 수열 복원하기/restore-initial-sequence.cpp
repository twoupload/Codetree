#include <iostream>
#include <vector>
#include <unordered_set> 

using namespace std;

// 주어진 차이 값 배열(diff)과 시작 숫자(start)를 이용하여 원래 수열(seq)을 복원하는 함수
bool restoreSequence(const vector<int>& diff, vector<int>& seq, int start) {
    seq[0] = start; // 첫 번째 숫자를 start로 설정

    for (int i = 1; i < seq.size(); i++) { // 두 번째 숫자부터 시작하여 수열 복원
        seq[i] = diff[i - 1] - seq[i - 1]; // 차이 값을 이용하여 다음 숫자 계산
        
        // 계산된 숫자가 범위 (1 ~ n)를 벗어나거나 
        // 이미 등장한 숫자인 경우 (중복), false 반환 (복원 실패)
        if (seq[i] <= 0 || seq[i] > diff.size() + 1) { 
            return false;
        }
    }

    // 중복 검사 (unordered_set 사용)
    unordered_set<int> uniqueNums; // 숫자의 중복 여부를 확인하기 위한 해시 테이블
    for (int num : seq) { // 복원된 수열의 각 숫자에 대해
        if (uniqueNums.count(num) > 0) { // 이미 등장한 숫자라면 중복
            return false; // 중복된 숫자가 있으면 false 반환
        }
        uniqueNums.insert(num); // 현재 숫자를 해시 테이블에 추가
    }
    return true; // 모든 숫자가 유효하고 중복이 없으면 true 반환 (복원 성공)
}

int main() {
    int n; // 수열의 크기
    cin >> n;

    vector<int> diff(n - 1); // 차이 값을 저장할 동적 배열 (크기 n-1)
    for (int i = 0; i < n - 1; i++) {
        cin >> diff[i]; // 차이 값들을 입력받음
    }

    vector<int> seq(n); // 복원된 수열을 저장할 동적 배열 (크기 n)

    // 가능한 모든 시작 숫자 (1부터 diff[0] - 1까지)에 대해 시도
    for (int start = 1; start < diff[0]; start++) { 
        if (restoreSequence(diff, seq, start)) { // 수열 복원에 성공하면
            for (int num : seq) { // 복원된 수열 출력
                cout << num << " ";
            }
            return 0; // 프로그램 종료
        }
    }

    // 복원 가능한 수열이 없는 경우
    cout << "-1"; // -1 출력
    return 0; 
}