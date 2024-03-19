#include <bits/stdc++.h>
using namespace std;

int adding(int num) {
    int sum = 0; // 각 자리 숫자의 합을 저장할 변수

    while(num > 0) {
        sum += num % 10; // 현재 숫자의 마지막 자리를 더함
        num /= 10; // 숫자의 마지막 자리를 제거
    }

    return sum;
}

int main() {
    int x, y;

    cin >> x >> y;

    int maxx = INT_MIN;
    for(int i = x; i <= y; i++) {
        maxx = max(maxx, adding(i)); // 수정된 adding 함수를 사용하여 각 자리 숫자의 합의 최댓값을 찾음
    }

    cout << maxx;
    return 0;
}