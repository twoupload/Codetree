// 1
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num;

    for(int i = 1; i <= num; i++) {
        if(i % 2 == 0) continue;
        else cout << i << " ";
    }
    return 0;
}