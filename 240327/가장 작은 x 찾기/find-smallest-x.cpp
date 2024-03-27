#include <iostream>
using namespace std;

int n;

struct S {
    int a;
    int b;
};

S s[10];

int main() {
    cin >> n;
    

    for(int i = 0; i < n; i++) {
        cin >> s[i].a >> s[i].b;
    }

    int temp = s[n-1].a;

    for(int i = n - 1; i >= 0; i--) {
        if(temp % 2 == 0) {
            temp = temp / 2;
        } // 2의 배수인 경우
        else {
            int lnum = temp % 2;
            temp = (temp / 2) + lnum;
        } // 2의 배수가 아닌 경우

    }

    cout << temp;
    return 0;
}