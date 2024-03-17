#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Segment {
    int start, end;
};

bool compareSegments(const Segment& a, const Segment& b) {
    if (a.start == b.start) return a.end < b.end;
    return a.start < b.start;
}

// 선분이 겹치는지 확인하는 함수
bool isOverlapping(const Segment& a, const Segment& b) {
    return !(a.end < b.start || b.end < a.start);
}

// 주어진 선분들 중 3개를 제거하여 겹치지 않는 선분들의 가짓수를 계산하는 함수
int countNonOverlappingRemovals(vector<Segment>& segments) {
    int n = segments.size();
    int count = 0;

    // 선분을 시작점 기준으로 정렬
    sort(segments.begin(), segments.end(), compareSegments);

    // 모든 세 선분의 조합을 확인
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                bool overlap = false;
                // 남은 선분들이 서로 겹치는지 확인
                for (int l = 0; l < n; ++l) {
                    if (l == i || l == j || l == k) continue;
                    for (int m = l + 1; m < n; ++m) {
                        if (m == i || m == j || m == k) continue;
                        if (isOverlapping(segments[l], segments[m])) {
                            overlap = true;
                            break;
                        }
                    }
                    if (overlap) break;
                }
                if (!overlap) count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<Segment> segments(n);
    for(int i = 0; i < n; ++i) {
        cin >> segments[i].start >> segments[i].end;
    }

    cout << countNonOverlappingRemovals(segments) << endl;

    return 0;
}