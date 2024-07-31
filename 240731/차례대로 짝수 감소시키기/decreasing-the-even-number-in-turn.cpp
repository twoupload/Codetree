/// 3
#include <iostream>
using namespace std;

int i = 1;
int num = 2;
int sum;

int main() {
    int n, nn = 1000;
    cin >> n;

    while(nn > n) {
        nn = nn - (num * i);
        sum += num * i;
        i++;
    }

    cout << i - 1 << " " << sum;
    return 0;
}