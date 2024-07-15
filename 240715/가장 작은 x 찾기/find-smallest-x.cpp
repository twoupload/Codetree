#include <iostream>
using namespace std;

// 범위에 관한 구조체
struct range
{
    int start; // 시작
    int end; // 끝
};

range ran[11]; // 구조체 배열
int x = 1; // 시작하는 양의 정수
int count = 0;

int main() {
    int n; 
    cin >> n;

    for(int i = 0; i < n; i++) { // 배열에 직접 넣음
        cin >> ran[i].start >> ran[i].end;
    } 

    bool sw = false; // while 문을 빠져나오기 위한 스위치

    while(sw == false) {
        int temp = x * 2; // 처음 2를 곱하고 시작
        for(int i = 0; i < n; i++) {
            if(temp >= ran[i].start && temp <= ran[i].end) // 범위 안에 들어가는 경우 
            {
                count += 1;
                temp *= 2;
            }
        }

        if(count == n) sw = true; // n개의 범위를 전부 만족하는 경우
        else { // 범위 전부 불만족
            count = 0;
            x++;
        }
    }

    cout << x; // 최소값 출력

    return 0;
}