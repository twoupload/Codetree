#include <iostream>
#include <climits>

#define MAX_N 1000
#define MAX_H 100

using namespace std;

int n;
int k = 17;
int arr[MAX_N];

int main() {
    // 입력:
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = INT_MAX;
    // 크기가 K인 모든 구간을 잡아
    // 해당 구간 안에 들어오게 언덕을 깎고
    // 그 비용 중 중 최솟값을 계산합니다.
    for(int i = 0; i <= MAX_H; i++) {
        // 구간 [i, i + k] 에서의 언덕을 깎는
        // 비용을 계산합니다.
        // i + k보다 높은 언덕은 높이가 i + k가 되게 깎으며
        // i보다 낮은 언덕은 높이가 i가 되게 쌓으면 됩니다.
        int cost = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] < i)
                cost += (arr[j] - i) * (arr[j] - i);
            if(arr[j] > i + k)
                cost += (arr[j] - i - k) * (arr[j] - i - k);
        }

        ans = min(ans, cost);
    }
    
    cout << ans;
    
    return 0;
}