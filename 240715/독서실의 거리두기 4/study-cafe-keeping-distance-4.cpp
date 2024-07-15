#include <bits/stdc++.h>
using namespace std;

int n;
string sitting; // 좌석 현황
int arr[110]; // 좌석을 표현할 배열

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cin >> sitting;
    
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(sitting[i] == '1') {
            arr[cnt] = 1;
            cnt++;
        }
        else {
            arr[cnt] = 0;
            cnt++;
        }
    }

    int maxx = INT_MIN;
    for(int i = 1; i <= n; i++) {
        if(arr[i] == 1) continue;
        else {
            int left = 0, right = 0;
            int lcur = i, rcur = i;

            // 줄어들면서 값 계산
            while(arr[lcur - 1] != 1 && lcur - 1 != 0) {
                left++;
                lcur--;
            }
            // 늘어나면서 값 계산
            while(arr[rcur + 1] != 1 && rcur + 1 != n + 1) {
                right++;
                rcur++;
            }
            // 줄어든 것과 늘어난 것을 비교해서 최대값 계산
            maxx = max(maxx, max(left, right));
            
        }
    }

    cout << maxx - 1;
    return 0;
}