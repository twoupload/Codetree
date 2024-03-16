#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_N 1000

using namespace std;

int n, b;
struct PS {
    int p, s;
};

PS ps[MAX_N];

bool cmp(const PS& a, const PS& b) {
    return a.p + a.s < b.p + b.s; // 선물 가격과 배송비의 합이 작은 순으로 정렬
}

int main() {
    cin >> n >> b;
    for(int i = 0; i < n; i++) cin >> ps[i].p >> ps[i].s;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        vector<int> costs;
        for(int j = 0; j < n; j++) {
            if(i == j) // 쿠폰을 사용하는 학생
                costs.push_back(ps[j].p / 2 + ps[j].s);
            else // 쿠폰을 사용하지 않는 학생
                costs.push_back(ps[j].p + ps[j].s);
        }
        sort(costs.begin(), costs.end()); // 비용이 낮은 순으로 정렬

        int sum = 0, cnt = 0;
        for(int cost : costs) {
            if(sum + cost <= b) { // 예산 내에서 선물을 줄 수 있는 경우
                sum += cost;
                cnt++;
            }
            else break; // 예산을 초과하는 경우
        }
        ans = max(ans, cnt); // 최대 학생 수 갱신
    }

    cout << ans;
    return 0;
}