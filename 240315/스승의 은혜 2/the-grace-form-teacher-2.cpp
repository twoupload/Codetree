#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    vector<int> prices(N);
    for (int i = 0; i < N; ++i) {
        cin >> prices[i];
    }

    // 선물 가격을 오름차순으로 정렬합니다.
    sort(prices.begin(), prices.end());

    int count = 0; // 선물할 수 있는 학생 수
    bool usedCoupon = false; // 할인 쿠폰 사용 여부

    for (int i = 0; i < N; ++i) {
        if (B >= prices[i]) {
            B -= prices[i]; // 예산에서 선물 가격을 뺍니다.
            count++; // 선물한 학생 수를 증가시킵니다.
        } else if (!usedCoupon && B >= prices[i] / 2) {
            B -= prices[i] / 2; // 할인 쿠폰을 사용하여 예산에서 반값을 뺍니다.
            count++; // 선물한 학생 수를 증가시킵니다.
            usedCoupon = true; // 할인 쿠폰을 사용했다고 표시합니다.
        } else {
            // 더 이상 선물을 살 수 없으면 반복문을 종료합니다.
            break;
        }
    }

    cout << count; // 선물할 수 있는 최대 학생 수를 출력합니다.

    return 0;
}