#include <iostream>

#define MAX_N 20
#define MAX_K 10

using namespace std;

int k, n;
int arr[MAX_K][MAX_N];

int main() {
    // 입력
    cin >> k >> n;
    
    for(int i = 0; i < k; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    int ans = 0;

    // 모든 쌍에 대해서 불변의 순위인 쌍을 찾습니다.
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            // i번 개발자가 j번 개발자보다 항상 높은 순위인지 여부를 확인합니다.

            // i와 j가 같을 경우 넘어갑니다.
            if(i == j)
                continue;
            
            // correct : i번 개발자가 j번 개발자보다 항상 높은 순위일때 true
            bool correct = true;

            // k번의 모든 경기에 대해서 두 개발자의 위치를 찾고,
            // 하나라도 i번 개발자가 더 뒤에 있으면 correct를 false로 바꿉니다.
            for(int x = 0; x < k; x++) {
                int index_i = 0, index_j = 0;

                for(int y = 0; y < n; y++) {
                    if(arr[x][y] == i)
                        index_i = y;
                    if(arr[x][y] == j)
                        index_j = y;
                }

                if(index_i > index_j)
                    correct = false;
            }

            if(correct)
                ans++;
        }
    
    cout << ans;

    return 0;
}