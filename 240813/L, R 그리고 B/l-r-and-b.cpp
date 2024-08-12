#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Push {
public:
    int r, c;
    Push(int row, int col) : r(row), c(col) {}
};

const int N = 10;
char arr[N][N];
int dp[N][N];
int strI = -1, strJ = -1;
int lasI = -1, lasJ = -1;

// 인덱스가 유효한지 확인
bool indexOk(int r, int c) {
    return r >= 0 && r < N && c >= 0 && c < N;
}

// BFS 함수
void bfs(queue<Push>& q) {
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        Push p = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nextR = p.r + dr[i];
            int nextC = p.c + dc[i];

            // 유효한 인덱스인지 확인하고, 'R'이 아니고, 방문하지 않은 경우
            if (indexOk(nextR, nextC) && arr[nextR][nextC] != 'R' && dp[nextR][nextC] == 0) {
                dp[nextR][nextC] = dp[p.r][p.c] + 1;
                q.push(Push(nextR, nextC));
            }
        }
    }
}

int main() {
    // 입력 받기
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < N; j++) {
            arr[i][j] = str[j];
            if (arr[i][j] == 'B' || arr[i][j] == 'L') {
                if (strI != -1) {
                    lasI = i;
                    lasJ = j;
                } else {
                    strI = i;
                    strJ = j;
                }
            }
        }
    }

    queue<Push> q;
    q.push(Push(strI, strJ));
    bfs(q);

    // 결과 출력
    cout << dp[lasI][lasJ] - 1 << endl;

    return 0;
}