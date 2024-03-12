#include <iostream>
#include <cstdlib>

#define MAX_N 100

using namespace std;

int n;
int x[MAX_N], y[MAX_N];

// 삼각형의 넓이에 2를 곱한 값을 반환합니다.
int area(int i, int j, int k) {
    return abs((x[i] * y[j] + x[j] * y[k] + x[k] * y[i]) - 
               (x[j] * y[i] + x[k] * y[j] + x[i] * y[k]));
}

int main() {
    // 입력
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    
    // 3개의 점을 모두 골라보면서
    // 조건을 만족하는 경우 중
    // 최대 넓이를 계산합니다.
    int max_area = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++)
                // x값이 같은 쌍이 있으며, y값 역시 같은 쌍이 있는 경우에만
                // 최대 넓이를 계산합니다.
                if((x[i] == x[j] || x[i] == x[k] || x[j] == x[k]) &&
                   (y[i] == y[j] || y[i] == y[k] || y[j] == y[k]))
                    max_area = max(max_area, area(i, j, k));
    
    cout << max_area;
    return 0;
}