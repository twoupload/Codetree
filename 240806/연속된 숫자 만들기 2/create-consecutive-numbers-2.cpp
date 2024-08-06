#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    const int MAX_POS = 1000000; // 최대 위치
    vector<int> pos(3);
    
    // 입력 받기
    for (int i = 0; i < 3; i++) {
        cin >> pos[i];
    }

    int count = 0;
    while (true) {
        int a = abs(pos[0] - pos[1]);
        int b = abs(pos[1] - pos[2]);

        // 각 둘씩 잡아서 거리가 다 1이면 연속한 수
        if (a == 1 && b == 1) {
            break;
        }
        // 각 둘씩 잡았을 때 하나라도 거리가 2이면 한 번의 연산만 더 수행해주면 완성
        if (a == 2 || b == 2) {
            count += 1;
            break;
        }
        // 각 둘씩 잡았을 때의 거리가 모두 2보다 크면
        // 거리가 가까운 쪽 안에 반대편 수를 넣어준다.
        else if (a > 2 && b > 2) {
            if (a < b) {
                pos[1] = pos[0] + 2;
            } else {
                pos[0] = pos[1] - 2; // pos[1]은 그대로 두고 pos[0]을 조정
            }
        } else if (b > 2) {
            pos[0] = pos[1] - 2; // pos[1]을 기준으로 pos[0]을 조정
        } else if (a > 2) {
            pos[1] = pos[0] + 2; // pos[0]을 기준으로 pos[1]을 조정
        }

        count += 1;
    }

    cout << count << endl;
    return 0;
}