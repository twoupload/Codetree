#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

void turnToBinary(int n) // 십진수를 이진수로 바꾸는 함수
{
   stack<int> s;

   while(n >= 2) {
    s.push(n % 2);
    n = n / 2;
   }

   s.push(n);

   while(!s.empty()) {
    cout << s.top();
    s.pop();
   }
}

int main() {
    string binary; // 기본 이진수
    int num = 0; // 변환된 십진수

    cin >> binary;

    // 뒤에서부터 2의 제곱을 계산해서 십진수를 찾는다.
    reverse(binary.begin(), binary.end()); // 뒤집기
    
    for(int i = 0; i < binary.size(); i++) {
        if(binary[i] == '1') { // 1일때
            num = num + pow(2, i);// 2의 제곱만큼 계산
        }
    }

    num = num * 17; // 십진수를 17배

    turnToBinary(num);


    return 0;
}