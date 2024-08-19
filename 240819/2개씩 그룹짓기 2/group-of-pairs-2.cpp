#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <limits.h>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    // 배열을 정렬합니다.
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // 두 원소의 차이의 최솟값을 최대화하기 위해
    long long min_diff = LLONG_MAX; // 최대값 지정

    for (int i = 0; i < n; i++) {
        min_diff = min(min_diff, static_cast<long long>(arr[n + i] - arr[i]));
    }

    cout << min_diff << endl;

    return 0;
}