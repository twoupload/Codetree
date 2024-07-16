#include <iostream>
#include <algorithm>
#define MAX_N 1000 // 최대 수열 크기
using namespace std;

int n; // 수열의 크기
int num[MAX_N]; // 입력 받는 수열 (차이 값)

int main() {
    cin >> n; // 수열의 크기 입력

    int count[n + 1] = {}; // 각 숫자(1~n)의 등장 횟수를 세는 배열

    for (int i = 0; i < n - 1; i++) { // 차이 값들을 입력받음
        cin >> num[i];
    }

    int real[n] = {}; // 원래 수열을 저장할 배열

    for (int i = 1; i < num[0]; i++) { // 가능한 첫 번째 숫자 (1부터 num[0]-1까지)를 시도
        bool correct = true; // 수열이 조건을 만족하는지 확인하는 플래그
        int first = i; // 현재 시도 중인 첫 번째 숫자
        int start = 0; // real 배열의 현재 위치
        real[start] = first; // 첫 번째 숫자를 real 배열에 저장
        count[first]++; // 첫 번째 숫자의 등장 횟수 증가

        for (int j = 0; j < n - 1; j++) { // 차이 값을 이용해 수열 복원
            first = num[j] - first; // 다음 숫자 계산
            if (first <= 0 || first > n) { // 숫자가 범위를 벗어나면 올바르지 않음
                correct = false;
                continue; // 다음 첫 번째 숫자 시도
            }
            start++; // real 배열의 다음 위치로 이동
            real[start] = first; // 계산된 숫자를 real 배열에 저장
            count[first]++; // 해당 숫자의 등장 횟수 증가
        }

        for (int j = 1; j < n + 1; j++) { // 모든 숫자의 등장 횟수가 1인지 확인
            if (count[j] > 1) { // 중복된 숫자가 있으면 올바르지 않음
                correct = false;
            }
        }

        if (correct == true) { // 올바른 수열을 찾았으면 출력 후 종료
            for (int j = 0; j < n; j++) {
                cout << real[j] << " ";
            }
            return 0;
        }

        if (correct == false) { // 올바르지 않은 수열이면 배열 초기화
            for (int j = 0; j < n; j++) {
                real[j] = 0;
            }
            for (int j = 1; j < n + 1; j++) {
                count[j] = 0;
            }
        }
    }
    return 0; // 올바른 수열을 찾지 못했으면 종료
}