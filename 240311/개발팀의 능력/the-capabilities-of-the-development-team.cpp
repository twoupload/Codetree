#include <bits/stdc++.h>
using namespace std;

int a[5];
int i,j,k,l;


// 모든 팀의 능력치가 서로 다른 것을 확인하는 함수
bool isSame(int n1, int n2, int n3) {
    return n1 != n2 && n2 != n3 && n1 != n3;
}

// 서로 다른 능력치의 팀의 차가 최소화되게 하는 함수
int diff(int i, int j, int k, int l) {
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += a[i];
    }

    int num1 = a[i] + a[j];
    int num2 = a[k] + a[l];
    // 3번째 팀의 능력치는 1, 2번째 팀의 능력치를 전체에서 뺀 것.
    int num3 = sum - (num1 + num2);

    // 만약, 같은 경우
    if(!isSame(num1, num2, num3)) return INT_MAX;
    // 같지 않은 경우
    else {
        // 각 차이의 최대값을 찾는다.
        // 최대값 - 최솟값 = 팀간 능력 차이가 된다. 
        int r = abs(num1 - num2);
        r = max(r, abs(num2 - num3));
        r = max(r, abs(num3 - num1));
        return r;
    }
    
}

int main() {
    for(i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int minn = INT_MAX;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {


           for(k = 0; k < 5; k++) {
                for(l = 0; l < 5; l++) {
                    // 이미 했던 능력치를 제외
                    if(k == i || k == j || l == i || l == j)
                        continue;
                    // 차이가 가장 작은 것을 선택한다. 
                    minn = min(minn, diff(i,j,k,l));
                }
           } 
        }
    }
    

    if(minn == INT_MAX) cout << -1;
    else cout << minn;
    return 0;
}