#include <iostream>
#include <vector>

using namespace std;

int n, ans = 0;
bool is_found = false;

void back(int index, int p, bool is_odd, const vector<int>& arr) {
    int sum = 0;

    for (int i = index; i < n; i++) {
        sum += arr[i];

        if (is_found) {
            return;
        }

        // 홀수 차례
        if (is_odd && sum % 2 != 0) {
            back(i + 1, p + 1, !is_odd, arr);
        }
        // 짝수 차례
        else if (!is_odd && sum % 2 == 0 && i != index) {
            back(i + 1, p + 1, !is_odd, arr);
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

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    back(0, 0, true, arr); // 홀수로 시작

    cout << ans + 1 << endl; // 답 출력

    return 0;
}