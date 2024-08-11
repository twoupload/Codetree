#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> people(N);
    for (int i = 0; i < N; i++) {
        char ele;
        cin >> ele;
        people[i] = ele - 'A'; // 'A'의 ASCII 값을 빼서 0부터 시작하는 인덱스로 변환
    }

    int count = 0;

    // 길이가 1이면 움직일 필요 없음
    if (people.size() == 1) {
        cout << 0 << endl;
    } else {
        // 각 위치에 올바로 서있지 않으면 올바른 위치로 옮겨줌
        for (int i = 0; i < N; i++) {
            int order_index = find(people.begin(), people.end(), i) - people.begin();
            int temp = people[order_index];

            // order_index가 서있는 위치가 있어야 할 위치(i)보다 뒤에 있는 경우
            if (order_index > i) {
                for (int j = order_index; j > i; j--) {
                    people[j] = people[j - 1];
                }
                people[i] = temp;
                count += abs(order_index - i);
            }
        }
        cout << count << endl;
    }

    return 0;
}