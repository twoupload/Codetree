#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> elements(N);
    for (int i = 0; i < N; ++i) {
        cin >> elements[i];
    }

    // 원소들을 정렬
    sort(elements.begin(), elements.end());

    int start = 0, end = 0, max_length = 0;

    // 투 포인터 방식을 사용하여 문제 해결
    while (end < N) {
        // 현재 윈도우의 최댓값과 최솟값의 차이가 K 이하인 경우
        if (elements[end] - elements[start] <= K) {
            // 윈도우 크기 갱신
            max_length = max(max_length, end - start + 1);
            // 끝 포인터를 오른쪽으로 이동하여 윈도우 확장
            end++;
        } else {
            // 차이가 K를 초과하는 경우, 시작 포인터를 오른쪽으로 이동하여 윈도우 축소
            start++;
        }
    }

    // 결과 출력
    cout << max_length << endl;

    return 0;
}