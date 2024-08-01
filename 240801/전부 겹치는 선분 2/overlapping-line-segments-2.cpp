#include <iostream>
using namespace std;

struct Segment {
    int start;
    int end;
};

Segment segments[201];
int arr[101]; // 1에서 100까지 사용하므로 101 크기로 배열 선언

void clear() {
    for(int i = 0; i <= 100; i++) {
        arr[i] = 0;
    }
}

void set(int n1, int n2) {
    for(int i = n1; i <= n2; i++) {
        arr[i] += 1;
    }
}

bool check(int n) {
    for(int i = 0; i <= 100; i++) {
        if(arr[i] == n - 1) return true; // n-1 개의 선분이 겹치는 지점이 있는지 확인
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;

        segments[i].start = s;
        segments[i].end = e;
    }

    for(int i = 0; i < n; i++) {
        clear();
        for(int j = 0; j < n; j++) {
            if(j == i) continue; // 제외할 선분
            set(segments[j].start, segments[j].end); // 올바른 배열 접근
        }

        if(check(n)) { // 겹치는 지점이 있다면
            cout << "Yes" << endl;
            return 0; // 프로그램 종료
        }
    }

    cout << "No" << endl; // 모든 경우를 체크하고 겹치는 지점이 없으면 "No" 출력
    return 0;
}