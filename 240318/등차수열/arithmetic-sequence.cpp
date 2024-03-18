#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_A 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    // 입력
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;

    // 각 숫자에 대해 
    // 등차수열의 개수를 확인합니다.
    for(int x = 1; x <= MAX_A; x++) {
		// 모든 쌍을 만들어 등차수열의 개수를 확인합니다.
        int cnt = 0;

        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                if(arr[i] + arr[j] == 2 * x)
                    cnt++;
		
        ans = max(ans, cnt);
	}
    
    cout << ans;
	
    return 0;
}