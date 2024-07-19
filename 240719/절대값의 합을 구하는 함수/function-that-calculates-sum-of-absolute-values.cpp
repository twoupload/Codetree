#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        sum += abs(num); // abs --> 절댓값을 만드는 함수
    }

    cout << sum;
    return 0;
}