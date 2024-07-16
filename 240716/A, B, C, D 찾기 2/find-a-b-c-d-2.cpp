#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums(15);
    for (int i = 0; i < 15; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end()); // 입력 값 정렬

    int A, B, C, D;
    do {
        A = nums[0];
        B = nums[1];
        C = nums[2];
        D = nums[3];

        if (A + B == nums[4] && B + C == nums[5] && C + D == nums[6] &&
            D + A == nums[7] && A + C == nums[8] && B + D == nums[9] &&
            A + B + C == nums[10] && A + B + D == nums[11] &&
            A + C + D == nums[12] && B + C + D == nums[13] &&
            A + B + C + D == nums[14]) {
            break; // 조건을 만족하는 A, B, C, D 발견
        }
    } while (next_permutation(nums.begin(), nums.end())); // 다음 순열 생성

    cout << A << " " << B << " " << C << " " << D << endl;
    return 0;
}