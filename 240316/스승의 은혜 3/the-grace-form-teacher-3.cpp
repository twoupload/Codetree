#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, b;

struct PS {
    int p, s;
};

PS ps[MAX_N];

int main() {
    // 입력
    cin >> n >> b;

    for(int i = 0; i < n; i++)
        cin >> ps[i].p >> ps[i].s;

    int ans = 0;
    
    // 한 명의 학생에 선물 쿠폰을 쓸 때 선물 가능한 학생의 최대 명수를 구합니다.
    for(int i = 0; i < n; i++) {
        // i번째 학생의 선물에 쿠폰을 쓸 때 선물 가능한 학생 수를 구합니다.

        // tmp배열을 만들어 i번째 학생의 선물에 쿠폰을 쓸 때
        // 각 학생의 원하는 선물 가격을 저장합니다.
        int tmp[MAX_N] = {};
        int tmp2[MAX_N] = {};
        for(int j = 0; j < n; j++) {
            tmp[j] = ps[j].p;
            tmp2[j] = ps[j].s;
        }
        tmp[i] /= 2;

        // 학생을 선물 가격 순으로 정렬합니다.
        // 선물 가격이 가장 작은 학생부터 선물을 사 줄 때,
        // 반드시 가장 많은 학생에게 선물을 줄 수 있습니다.
        sort(tmp, tmp + n);
        sort(tmp2, tmp2 + n);

        
        int student = 0;
        int cnt = 0;

        // 가장 많은 학생에게 선물을 줄 때, 그 학생 수를 구합니다.
        // student : 선물받은 학생 수 / cnt : 현재까지 쓴 돈
        for(int j = 0; j < n; j++) {
            if(cnt + tmp[j] + tmp2[j] > b)
                break;
            cnt = cnt + tmp[j] + tmp2[j];
            student++;
        }

        ans = max(ans, student);
    }

    cout << ans;
    
    return 0;
}