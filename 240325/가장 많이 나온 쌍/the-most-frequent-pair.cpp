#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> count(n * n, 0); // n * n 크기의 벡터를 사용하여 각 쌍의 등장 횟수를 세기
    int max_count = 0; // 가장 많이 나온 쌍의 수를 저장할 변수
    
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        // a와 b 중 작은 값을 a로, 큰 값을 b로 설정
        if (a > b) swap(a, b);
        
        // 고유한 키 생성: a * n + b
        int key = (a - 1) * n + (b - 1); // 1부터 시작하는 인덱스를 0부터 시작하는 인덱스로 변환
        count[key]++; // 해당 키의 카운트를 증가
        
        // 최대 등장 횟수 갱신
        if (count[key] > max_count) {
            max_count = count[key];
        }
    }
    
    // 가장 많이 나온 쌍의 등장 횟수 출력
    cout << max_count << endl;
    
    return 0;
}