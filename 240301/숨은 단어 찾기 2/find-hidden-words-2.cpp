#include <iostream>
#include <vector>

using namespace std;

// 왼아, 왼, 왼위, 위, 오위, 오, 오아, 아
int dxs[8] = {1, 0, -1, -1, -1, 0, 1, 1};
int dys[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    auto in_range = [&](int x, int y) {
        return 0 <= x && x < n && 0 <= y && y < m;
    };

    // LEE 개수
    int num_of_LEE = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // L부터 시작이므로 L이 아니면 다음 위치로
            if (strings[i][j] != 'L') continue;

            for (int k = 0; k < 8; k++) {
                // 문자열 LEE 확인 리스트
                string check_LEE = "L";

                // 현재 위치
                int curx = i;
                int cury = j;

                while (true) {
                    int nx = curx + dxs[k];
                    int ny = cury + dys[k];

                    // 다음 위치가 격자를 벗어나면 break
                    if (!in_range(nx, ny)) break;

                    // 다음 문자가 E일 때 확인 리스트에 E 추가
                    if (strings[nx][ny] == 'E') {
                        check_LEE += 'E';
                        // 확인 리스트 길이가 3이면 LEE로 판단, LEE 개수 증가
                        if (check_LEE.length() == 3) {
                            num_of_LEE++;
                            break;
                        }
                    }
                    // 다음 문자가 E가 아니면 break
                    else break;

                    // 현재 위치 갱신
                    curx = nx;
                    cury = ny;
                }
            }
        }
    }

    cout << num_of_LEE;

    return 0;
}