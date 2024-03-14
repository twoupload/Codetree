#include <bits/stdc++.h>
using namespace std;

struct Segment {
    int start, end;
};

bool compareSegment(const Segment& a, const Segment& b) {
    if (a.start == b.start) return a.end < b.end;
    return a.start < b.start;
}

int main() {
    int N;
    cin >> N;

    vector<Segment> segments(N);
    for (int i = 0; i < N; ++i) {
        cin >> segments[i].start >> segments[i].end;
        if (segments[i].start > segments[i].end) {
            swap(segments[i].start, segments[i].end);
        }
    }

    sort(segments.begin(), segments.end(), compareSegment);

    int currentEnd = segments[0].end;
    bool isConnected = true;

    for (int i = 1; i < N; ++i) {
        if (segments[i].start > currentEnd) {
            isConnected = false;
            break;
        }
        currentEnd = max(currentEnd, segments[i].end);
    }

    if(isConnected) {
        cout << 0;
    } else {
        cout << 1;
    }

    return 0;
}