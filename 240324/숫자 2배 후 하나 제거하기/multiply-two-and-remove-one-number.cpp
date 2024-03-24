#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int calculateDifferenceSum(const vector<int>& numbers) {
    int sum = 0;
    for (size_t i = 1; i < numbers.size(); ++i) {
        sum += abs(numbers[i] - numbers[i - 1]);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int minDifferenceSum = INT_MAX;

    for (int i = 0; i < n; ++i) { // 반복문을 통해 숫자를 2배 할 원소를 선택
        int doubled = numbers[i] * 2;
        for (int j = 0; j < n; ++j) { // 반복문을 통해 제거할 원소를 선택
            if (i == j) continue; // 같은 원소를 제거할 수는 없음

            vector<int> modifiedNumbers = numbers;
            modifiedNumbers[i] = doubled; // 숫자를 2배 함
            modifiedNumbers.erase(modifiedNumbers.begin() + j); // 원소를 제거

            // 인접한 원소간의 차이�� 합 계산
            int currentDifferenceSum = calculateDifferenceSum(modifiedNumbers);
            
            // 최솟값 업데이트
            minDifferenceSum = min(minDifferenceSum, currentDifferenceSum);
        }
    }

    cout << minDifferenceSum << endl;

    return 0;
}