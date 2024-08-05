#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X; // 거리 입력 받기

    int curr_pos = 0; // 현재 위치
    int curr_speed = 1; // 현재 속도
    int sum_time = 0; // 총 시간

    while (true) {
        curr_pos += curr_speed; // 현재 속도로 이동
        sum_time += 1; // 시간 증가
        curr_speed += 1; // 속도 증가

        if (curr_pos == X) {
            break; // 목표 지점에 도달하면 종료
        }

        // 증가 거리 계산
        int increase_sum = 0;
        for (int i = 0; i < curr_speed; i++) {
            increase_sum += i; // 증가 거리 합계
        }

        // 다음 위치가 목표 지점을 초과할 경우 속도 감소
        if (X - (curr_pos + curr_speed) < increase_sum) {
            curr_speed -= 1;
        }

        // 현재 속도로 정지할 경우 거리 계산
        int stay_sum = 0;
        for (int i = 0; i < curr_speed; i++) {
            stay_sum += i; // 정지 거리 합계
        }

        // 다음 위치가 목표 지점을 초과할 경우 속도 감소
        if (X - (curr_pos + curr_speed) < stay_sum) {
            curr_speed -= 1;
        }
    }

    cout << sum_time << endl; // 최종 시간 출력
    return 0;
}