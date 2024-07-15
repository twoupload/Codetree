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

    for(int i = 0; i < n; i++) {
        cin >> ran[i].start >> ran[i].end;
    } 

    bool sw = false;

    while(sw == false) {
        int temp = x * 2;
        for(int i = 0; i < n; i++) {
            if(temp >= ran[i].start && temp <= ran[i].end) 
            {
                count += 1;
                temp *= 2;
            }
        }

        if(count == n) sw = true;
        else {
            count = 0;
            x++;
        }
    }

    cout << x;

    return 0;
}