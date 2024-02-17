#include <iostream>

#define MAX_NUM 100
#define DIR_NUM 4

using namespace std;

int n, m;
int arr[MAX_NUM][MAX_NUM];

int dx[DIR_NUM] = {0, 1,  0, -1};
int dy[DIR_NUM] = {1, 0, -1,  0};

int curr_x, curr_y;  // 시작은 (0, 0) 입니다.
int dir;             // 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    // 입력:
    cin >> n >> m;

    // 처음 시작 위치에 초기값을 적습니다.
    arr[curr_x][curr_y] = 1;

    // n*m개의 숫자를 적어야 합니다. 
    for(int i = 2; i <= n * m; i++) { // 숫자 i를 어디에 적을지 결정합니다.
        // 현재 방향 dir를 기준으로 그 다음 위치 값을 계산합니다.
        int next_x = curr_x + dx[dir], next_y = curr_y + dy[dir];

        // 더 이상 나아갈 수 없다면
        // 시계방향으로 90'를 회전합니다.
        if(!InRange(next_x, next_y) || arr[next_x][next_y] != 0)
            dir = (dir + 1) % 4;

        // 그 다음 위치로 이동한 다음 배열에 올바른 값을 채워넣습니다.
        curr_x = curr_x + dx[dir]; curr_y = curr_y + dy[dir];
        arr[curr_x][curr_y] = i;
    }
    
    // 출력:
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) 
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}