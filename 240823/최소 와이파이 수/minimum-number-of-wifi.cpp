#include <iostream>

#define MAX_N 100

using namespace std;

int n, m;
int arr[MAX_N];

int main() {
    // 입력:
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // 사람이 살고 있는 곳이 나오면
    // 와이파이를 해당 위치로부터 오른쪽으로 m만큼 떨어진 곳에 놓은 뒤,
    // 2m만큼 떨어진 곳에서 시작하여 다시 탐색을 진행합니다.
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            cnt++;
            i += 2 * m;
        }
    }
    
    cout << cnt;
    return 0;
}