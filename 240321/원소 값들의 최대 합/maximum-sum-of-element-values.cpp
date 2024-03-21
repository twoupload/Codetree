#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> sequence(n + 1); // 1부터 시작하는 인덱싱을 위해 n + 1 크기 할당
    for (int i = 1; i <= n; i++) {
        cin >> sequence[i];
    }
    
    int maxSum = 0; // 최대 원소값들의 합을 저장할 변수
    
    // 모든 위치에서 시작해보며 최대 원소값들의 합을 찾음
    for (int start = 1; start <= n; start++) {
        int sum = 0; // 현재 시작 위치에서의 원소값들의 합
        int currentPosition = start; // 현재 위치
        
        for (int move = 0; move < m; move++) { // m번 움직임 반복
            currentPosition = sequence[currentPosition]; // 원소값을 다음 위치로 사용
            sum += currentPosition; // 원소값을 합에 추가
        }
        
        maxSum = max(maxSum, sum); // 최대 원소값들의 합 갱신
    }
    
    cout << maxSum << endl; // 최대 원소값들의 합 출력
    
    return 0;
}