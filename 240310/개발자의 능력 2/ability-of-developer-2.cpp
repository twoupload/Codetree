#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

#define MAX_N 6

using namespace std;

int n = MAX_N;
int arr[MAX_N];

int Diff(int i, int j, int k, int l) {
    int total_sum = 0;
    for(int l = 0; l < n; l++)
        total_sum += arr[l];
    
    // 세 번째 팀원의 합은 전체에서 첫 번째 팀원과 두 번째 팀원의 합을 빼주면 됩니다.
    int sum1 = arr[i] + arr[j];
	int sum2 = arr[k] + arr[l];
    int sum3 = total_sum - sum1 - sum2;
	
	// 세 팀의 차이 중 최댓값을 리턴합니다.
	int ret = abs(sum1 - sum2);
	ret = max(ret, abs(sum2 - sum3));
	ret = max(ret, abs(sum3 - sum1));
	
    return ret;
}

int main() {
    // 입력
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // 첫 번째 팀원을 만들어줍니다.
    int min_diff = INT_MAX;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
			
			// 두 번째 팀원을 만들어줍니다.
            for(int k = 0; k < n; k++)
				for(int l = k + 1; l < n; l++) {
					//첫 번째 팀원과 두 번째 팀원이 겹치는지 여부를 확인합니다.
					if(k == i || k == j || l == i || l == j)
						continue;
					min_diff = min(min_diff, Diff(i, j, k, l));
				}
    
    cout << min_diff;
    return 0;
}