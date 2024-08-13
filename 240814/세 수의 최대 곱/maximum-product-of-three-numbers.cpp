#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n; // 정수 n 입력 받기

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i]; // n개의 정수 입력 받기
    }

    // 정수를 오름차순으로 정렬
    sort(numbers.begin(), numbers.end());

    // 최대 곱을 구하기 위해 두 가지 경우를 고려
    // 1. 가장 큰 세 수의 곱
    int maxProduct1 = numbers[n - 1] * numbers[n - 2] * numbers[n - 3];

    // 2. 가장 작은 두 수와 가장 큰 수의 곱 (음수의 곱이 양수가 될 수 있으므로)
    int maxProduct2 = numbers[0] * numbers[1] * numbers[n - 1];

    // 두 경우 중 최대값을 선택
    int maxProduct = max(maxProduct1, maxProduct2);

    cout << maxProduct << endl; // 최대 곱 출력

    return 0;
}