#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; // 시행 횟수
    cin >> N;

    // 각 종이컵의 점수를 저장할 배열
    vector<int> scores(3, 0);
    // 종이컵의 위치를 저장할 배열, 초기에는 조약돌이 각 종이컵에 있는 것으로 가정
    vector<int> position = {0, 1, 2};

    // N번의 시행동안 종이컵 교환과 점수 계산
    for (int i = 0; i < N; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        // 인덱스는 0부터 시작하므로 입력받은 값에서 1을 빼줌
        --a; --b; --c;

        // 종이컵 교환
        swap(position[a], position[b]);

        // 점수 계산
        scores[position[c]]++;
    }

    // 최대 점수 찾기
    int maxScore = max(scores[0], max(scores[1], scores[2]));

    // 최대 점수 출력
    cout << maxScore << endl;

    return 0;
}