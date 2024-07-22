#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, l; // n: 숫자 개수, l: 최대 변경 가능 횟수
    cin >> n >> l;

    vector<int> nums(n); // 숫자들을 저장할 벡터
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // 숫자 입력
    }

    for (int h = n; h >= 0; h--) { // 가능한 최대 H 점수부터 탐색 (n부터 0까지 감소)
        int lCnt = 0, hCnt = 0; // lCnt: 1 증가시킨 숫자 개수, hCnt: h 이상인 숫자 개수

        for (int i = 0; i < n; i++) { 
            if (nums[i] >= h) { // 이미 h 이상인 경우
                hCnt++; // hCnt 증가
            } else if (nums[i] == h - 1) { // h - 1인 경우 (1 증가시키면 h 이상이 됨)
                hCnt++; // hCnt 증가
                lCnt++; // lCnt 증가 (변경 횟수 사용)
            }
        }

        // hCnt가 h 이상이고, 불필요하게 늘어난 hCnt를 제외한 lCnt가 l 이하인지 확인
        if (hCnt >= h && (lCnt - (hCnt - h)) <= l) { 
            cout << h << endl; // 조건을 만족하는 h 출력 (최대 H 점수)
            break; // 더 이상 탐색할 필요 없으므로 반복문 종료
        }
    }

    return 0;
}