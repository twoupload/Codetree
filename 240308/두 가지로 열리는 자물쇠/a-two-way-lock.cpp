#include <iostream>

using namespace std;

int n;
int a, b, c;
int a2, b2, c2;

int main() {
    // 입력
    cin >> n;
    cin >> a >> b >> c;
	cin >> a2 >> b2 >> c2;
    
    // 모든 조합을 다 만들어 봅니다.
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            for(int k = 1; k <= n; k++) {
                // 모든 자리가 주어진 첫 조합과의 거리가 2 이내인지 확인합니다.
                if((abs(a - i) <= 2 || abs(a - i) >= n - 2) && (abs(b - j) <= 2 || abs(b - j) >= n - 2) && 
                   (abs(c - k) <= 2 || abs(c - k) >= n - 2))
                    cnt++;
				
				// 모든 자리가 주어진 두번째 조합과의 거리가 2 이내인지 확인합니다.
                else if((abs(a2 - i) <= 2 || abs(a2 - i) >= n - 2) && (abs(b2 - j) <= 2 || abs(b2 - j) >= n - 2) && 
                   (abs(c2 - k) <= 2 || abs(c2 - k) >= n - 2))
                    cnt++;
            }
    
    cout << cnt;
    return 0;
}