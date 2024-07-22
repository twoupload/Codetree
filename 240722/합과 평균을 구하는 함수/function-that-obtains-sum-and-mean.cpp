#include <iostream>
#include <cmath> // round 함수 사용을 위해 필요

using namespace std;

// 합과 평균을 계산하는 함수
void calculateSumAndAverage(double num1, double num2, double num3) {
    // 실수를 정수로 반올림
    int roundedNum1 = round(num1);
    int roundedNum2 = round(num2);
    int roundedNum3 = round(num3);

    // 합과 평균 계산
    int sum = roundedNum1 + roundedNum2 + roundedNum3;
    int average = round(sum / 3.0); // 평균 계산 후 반올림

    // 결과 출력
    cout << sum << endl;
    cout << average << endl;
}

int main() {
    double num1, num2, num3;

    // 실수 3개 입력
    cin >> num1 >> num2 >> num3;

    // 함수 호출
    calculateSumAndAverage(num1, num2, num3);

    return 0;
}