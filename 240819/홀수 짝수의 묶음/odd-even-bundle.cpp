#include <iostream>
#include <vector>

using namespace std;

int n, ans = 0;
bool is_found = false; // 변수 이름을 변경했습니다.

void back(int index, int p, bool is_odd, const vector<int>& arr) {
    // 각 묶음의 속한 수들의 총합을 담을 변수
    int sum = 0;

    for (int i = index; i < n; i++) {
        sum += arr[i]; // 현재 원소를 더합니다.

        if (is_found) {
            // 답을 찾아냈음으로 재귀호출 된 함수들에서 필요없는 반복문을 돌리지 않도록 모두 탈출해줍니다.
            return;
        }

        // 홀수를 만들어야 하는 차례
        if (is_odd && sum % 2 != 0) {
            back(i + 1, p + 1, !is_odd, arr); // 다음 묶음 호출
        }
        // 짝수 차례
        else if (!is_odd && sum % 2 == 0 && i != index) {
            back(i + 1, p + 1, !is_odd, arr); // 다음 묶음 호출
        }
    }

    // 마지막 묶음 확인
    if (!is_found) {
        if (is_odd && sum % 2 != 0) {
            is_found = true;
            ans = p;
        } else if (!is_odd && sum % 2 == 0) {
            is_found = true;
            ans = p;
        }
    }
}

int main() {
    cin >> n;
    is_found = false;

    // 현재 묶음이 합이 홀수이어야 하는 경우인지 짝수이어야 하는 경우인지 구분지어주는 변수입니다
    bool odd = false;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 배열 탐색 시작점인 0, 현재까지의 묶음 수 0, 짝수로 시작하기 때문에 odd 변수에 false를 넣어서 재귀함수를 시작합니다
    back(0, 0, odd, arr);

    cout << ans + 1 << endl;

    return 0;
}