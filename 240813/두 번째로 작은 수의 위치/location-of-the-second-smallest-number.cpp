#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // 중복을 제거하기 위해 set 사용
    set<int> uniqueNumbers(numbers.begin(), numbers.end());

    // 두 번째로 작은 수가 존재하는지 확인
    if (uniqueNumbers.size() < 2) {
        cout << -1 << endl; // 두 번째로 작은 수가 없을 경우
        return 0;
    }

    // 두 번째로 작은 수 찾기
    auto it = uniqueNumbers.begin();
    ++it; // 두 번째 원소로 이동
    int secondSmallest = *it;

    // 두 번째로 작은 수의 위치 찾기
    for (int i = 0; i < n; i++) {
        if (numbers[i] == secondSmallest) {
            cout << i + 1 << endl; // 1-based 인덱스 출력
            return 0;
        }
    }

    cout << -1 << endl; // 만약 두 번째로 작은 수가 여러 개일 경우
    return 0;
}