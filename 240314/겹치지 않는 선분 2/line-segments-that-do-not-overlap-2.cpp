#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 선분을 표현하기 위한 구조체
struct Line {
    int start, end;
};

// 선분의 시작점을 기준으로 정렬하기 위한 함수
bool compareLine(const Line& a, const Line& b) {
    return a.start < b.start;
}

int main() {
    int N;
    cin >> N; // 선분의 개수 입력

    vector<Line> lines(N);

    // 선분의 시작점과 끝점 입력
    for (int i = 0; i < N; ++i) {
        cin >> lines[i].start >> lines[i].end;
    }

    // 선분을 시작점 기준으로 정렬
    sort(lines.begin(), lines.end(), compareLine);

    int count = 0; // 겹치지 않는 선분의 수
    int currentEnd = -1000001; // 현재까지 확인한 선분의 끝점 중 가장 큰 값

    for (const auto& line : lines) {
        // 현재 선분의 시작점이 이전에 확인한 선분의 끝점보다 클 경우, 겹치지 않는다.
        if (line.start > currentEnd) {
            count++;
            currentEnd = line.end;
        } else {
            // 겹치는 경우, 겹치지 않는 선분의 끝점을 갱신
            currentEnd = max(currentEnd, line.end);
        }
    }

    cout << count; // 겹치지 않는 선분의 수 출력

    return 0;
}